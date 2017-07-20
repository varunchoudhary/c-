#include<iostream>
using namespace std;
void matrix(int b[][5],int m,int n){
	int i,j,l[m][n],maxsum,maxi,maxj;
	for( i=0;i<m;i++)
		l[i][0]=b[i][0];
	for(j=0;j<n;j++)
		l[0][j]=b[0][j];
	
	for(i=1;i<m;i++){
		for(j=1;j<n;j++){
			if(b[i][j]==0)
				l[i][j]=min(l[i][j-1],min(l[i-1][j-1],l[i-1][j]))+1;
			else
				l[i][j]=0;
		}
	}
	maxsum=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(l[i][j]>maxsum){
				maxsum=l[i][j];
				maxi=i;
				maxj=j;	
			}	
		}
	}
	
	for(i=maxi;i>maxi-maxsum;i--){
		for(j=maxj;j>maxj-maxsum;j--){
			cout<<b[i][j];
		}
		cout<<endl;
	}
}
int main(){
int b[][5]={{0,1,1,0,1},{1,1,0,1,0},{0,1,1,1,0},{1,0,0,0,0},{1,0,0,0,1},{0,0,0,0,0}};
matrix(b,6,5);
}
