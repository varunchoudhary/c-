#include<iostream>
using namespace std;
//building bridges cross two cities
int lcs(int *a,int *b,int n){
int l[n+1][n+1];
for(int i=0;i<=n;i++)
	l[i][n]=0;
for(int i=0;i<=n;i++)
	l[n][i]=0;
for(int i=n-1;i>=0;i--){
	for(int j=n-1;j>=0;j--){
		l[i][j]=l[i+1][j+1];
		if(a[i]==b[j])
			l[i][j]++;
		if(l[i][j]<l[i+1][j])
			l[i][j]=l[i+1][j];
		if(l[i][j]<l[i][j+1])
			l[i][j]=l[i][j+1];
	}
}
return l[0][0];
}
int main(){
int a[]={1,3,2,5,4,6,7};
int b[]={1,2,3,4,6,7,5};
int n=sizeof(a)/sizeof(a[0]);
cout<<lcs(a,b,n)<<endl;}
