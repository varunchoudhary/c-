#include<iostream>
#include"BinaryTreeNode.h"
using namespace std;
pair<int,int> bestSum(BinaryTreeNode<int>* root){
	if (root==NULL){
	pair<int,int> p(0,0);
	return p;
	}
	pair<int,int> leftans=bestSum(root->left);
	pair<int,int> rightans=bestSum(root->right);
	int x=leftans.first+rightans.first;
	int y=max(leftans.first+rightans.first,root->data+leftans.second+rightans.second);
	pair<int,int>p(x,y);
	return p;
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
int main(){
BinaryTreeNode<int>* root = takeInput();
	pair<int,int> p=bestSum(root);
	cout<<p.first<<"$"<<p.second<<endl;
	print(root);
	return 0;
}

