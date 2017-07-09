#include<iostream>
#include"BinaryTreeNode.h"
using namespace std;
BinaryTreeNode<int>* makebst(int *a,int low,int end ){
	if(low>end)
		return NULL;
	int mid=(low+end)/2;
	BinaryTreeNode<int>* root=new	 BinaryTreeNode<int>(a[mid]);
	
	root->left=makebst(a,low,mid-1);
	root->right=makebst(a,mid+1,end);
	
	return root;

}
BinaryTreeNode<int>* make(int *a,int n ){
	return makebst(a,0,n);
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
int main(){
int a[]={1,2,3,4,5,6,7};
BinaryTreeNode<int>* t=make(a,7);
print(t);

}

