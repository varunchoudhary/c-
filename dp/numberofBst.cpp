#include<iostream>

using namespace std;

int l[1000][1000];



int size(int n){
l[0][1]=0;
l[1][2]=l[0][1]+1;
	for(int i=2;i<=n;i++){
		l[i][n]+=l[i-1][n-i];
	}
	return l[n-1][n-1]; 
}
int main(){
for(int i=0;i<1000;i++){
	for(int j=0;j<1000;j++){
		l[i][j]=0;	
	}
}
cout<<size(4);
}
