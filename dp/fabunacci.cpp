#include<iostream>
using namespace std;
int a[10000];
int fabunacci(int n){
	if(n==0)
		return 1;
	if(n==1)
		return 1;
	if(a[n]!=0) 
		return a[n];
	return  a[n]=fabunacci(n-1)+fabunacci(n-2); 
}
int main(){
	int n;
	cin>>n;
	int f=fabunacci(n);
	cout<<f;
}
