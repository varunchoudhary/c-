#include<iostream>
using namespace std;
int matrix(int *p,int i,int j){

	if(i==j)
		return 0;
	int k;
	int min=999999;
	int count;
	for(int k=i;k<j;k++){
		count = matrix(p,i,k)+matrix(p,k+1,j)+p[i-1]*p[k]*p[j];
		if(count<min)
			min=count;
	}
	return min;
}

int  matrix1(int *p,int n ){
int l1[n][n];
	for(int i=0;i<n+1;i++){
			l1[i][i]=0;	
	}
	int i,j,k,l,q;
	for(l=2;l<n;l++){
		for(i=0;i<n-l+1;i++){
			j=i+l-1;
			l1[i][j]=9999999;
			for(k=i;k<j+1;k++){
				q=l1[i][k]+l1[k+1][j]+p[i-1]*p[k]*p[j];
				if(q<l1[i][j])
					l1[i][j]=q;
			}
		}
	}
	return l1[1][n-1];

}
int main(){
int p[]={5,10,50,100};
int n=sizeof(p)/sizeof(p[0]);
cout<<matrix1(p,n);
	
}
