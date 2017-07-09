#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;

pair<int, int> bestSum(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		pair<int, int> p(0,0);
		return p;
	}
	pair<int, int> leftAns = bestSum(root->left);
	pair<int, int> rightAns = bestSum(root->right);
	int y = leftAns.first + rightAns.first;
	int x = max(leftAns.first + rightAns.first, root->data + leftAns.second + rightAns.second);
	pair<int, int> p(x, y);
	return p;
}


vector<BinaryTreeNode<int>*>* rootToLeaf(BinaryTreeNode<int>* root, int data) {
	if (root == NULL) {
		return NULL;
	}

	if (root->data == data) {
		vector<BinaryTreeNode<int>*>* v = new vector<BinaryTreeNode<int>*>();
		v->push_back(root);
		return v;
	}

	vector<BinaryTreeNode<int>*>* lans = rootToLeaf(root->left, data);
	if (lans != NULL) {
		lans->push_back(root);
		return lans;
	}
	
	vector<BinaryTreeNode<int>*>* rans = rootToLeaf(root->right, data);
	if (rans) {
		rans->push_back(root);
		return rans;
	}else {
		return NULL;
	}

}

BinaryTreeNode<int>* lca(BinaryTreeNode<int>* root, int data1, int data2) {
	if (root == NULL) {
		return NULL;
	}
	
	if (root->data == data1 || root->data == data2) {
		return root;
	}

	BinaryTreeNode<int>* lans = lca(root->left, data1, data2);
	BinaryTreeNode<int>* rans = lca(root->right, data1, data2);
	if (lans && rans) {
		return root;
	} else if (lans) {
		return lans;
	} else {
		return rans;
	}
}

bool lca(BinaryTreeNode<int>* root, int data1, int data2, 
		BinaryTreeNode<int>* & ans) {
	if (root == NULL) {
		return false;
	}

	if (root->data == data1 || root->data == data2) {
		if (lca(root->left, data1, data2, ans) || 
				lca(root->right, data1, data2, ans)) {
			ans = root;
		}
		return true;
	}
	
	bool lans = lca(root->left, data1, data2, ans);
	bool rans = lca(root->right, data1, data2, ans);
	if (lans && rans) {
		ans = root;
		return true;
	} else if (lans || rans) {
		return true;
	} else {
		return false;
	}
}

int height(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return 0;
	}
	/*
	if (height(root->left) > height(root->right)) {
		return height(root->left) + 1;
	} else {
		return height(root->right) + 1;
	}
	*/
	return 1 + max(height(root->left), height(root->right));
}

pair<int, int> diamater2(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		pair<int, int> p(0,0);
		return p;
	}
	pair<int, int> lAns = diamater2(root->left);
	pair<int, int> rAns = diamater2(root->right);
	int height = max(lAns.first, rAns.first) + 1;
	int diameter = max(max(lAns.second, rAns.second), lAns.first + rAns.first);
	pair<int, int> p(height, diameter);
	return p;
}

int diameter(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return 0;
	}
	int lh = height(root->left);
	int rh = height(root->right);
	int ld = diameter(root->left);
	int rd = diameter(root->right);
	return max(max(ld, rd), lh + rh);
}

void preorder(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << endl;
	preorder(root->left);
	preorder(root->right);
}

void inorder(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << endl;
	inorder(root->right);
}

void print(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data  << ":";
	if (root->left != NULL) {
		cout << "L:" << root->left->data << ",";
	}

	if (root->right != NULL) {
		cout << "R:" << root->right->data;
	}
	cout << endl;
	print(root->left);
	print(root->right);
}

int numNodes(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + numNodes(root->left) + numNodes(root->right);
}


BinaryTreeNode<int>* takeInput() {
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	root->left = takeInput();
	root->right = takeInput();
	return root;
}


// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
int main() {
	BinaryTreeNode<int>* root = takeInput();
	print(root);
	delete root;
}

