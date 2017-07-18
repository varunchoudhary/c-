#include<iostream>
 using namespace std;
 
 int sum(int *a,int n){
	 int *m=new int[n];
	 for(int i=0;i<n;i++)
	 m[i]=0;
	 int sum=0;
	 if(a[0]>0)
	 	m[0]=a[0];
	 else
	 	m[0]=0;
	 for(int i=1;i<n;i++){
	 	if(m[i-1]+a[i]>0)
	 		m[i]=m[i-1]+a[i];
	 	else
	 		m[i]=0;
	 }
	 for(int i=0;i<n;i++){
	 	if(sum<m[i])
	 		sum=m[i];
	 }
	 delete [] m;
	 return sum;
 }
 int main(){
 int a[]={-2,11,-4,13,-5,2};
 int n=sizeof(a)/sizeof(a[0]);
 cout<<sum(a,n)<<endl; 
 }
