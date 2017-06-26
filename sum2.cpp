#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> a=new int*;
//	int a[]={2,3,4,5};
	for(int i=0;i<4;i++)
		a[i]=i;
	for(int i=0;i<4;i++)
		cout<<a[i];
}
