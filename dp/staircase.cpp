#include<iostream>
using namespace std;
//recursive method
int steps(int n){
if(n==0||n==1)
	return 1;
if(n==2)
	return 2;
if(n==3)
	return 3;	
return steps(n-1)+steps(n-2)+steps(n-3); 
}
//dp
int a[1000];
int steps1(int n){
if(n==0||n==1)
	return 1;
if(n==2)
	return 2;
if(n==3)
	return 3;
if(a[n]!=0) return a[n] ;	
return a[n]=steps1(n-1)+steps1(n-2)+steps1(n-3); 
}
int main(){
cout<<steps1(1000);
cout<<steps(50);
return 0;
}
