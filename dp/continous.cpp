#include<iostream>
using namespace std;
int  reconti(int *a,int n){
	int maxsum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int checksum=0;
			for(int k=i;k<j;k++){
				checksum+=a[k];
			}
			if(maxsum<checksum){
				maxsum=checksum;
			}
		}
	}
	return maxsum;
}
int dpconti(int *a,int n){
	int m[n]={0};
	if(a[0]>0)
		m[0]=a[0];
	else
		m[0]=0;
	for(int i=0;i<n;i++){
		if(m[i-1]+a[i]>0)
			m[i]=m[i-1]+a[i];
		else
			m[i]=0;
	}
	int maxsum=0;
	for(int i=0;i<n;i++){
		if(maxsum<m[i])
			maxsum=m[i];
	}
	return maxsum;
}
//if alteranating numbers are not allowed
int dp2conti(int *a,int n){
int m[n+1]={0},maxsum;
m[0]=a[0];
m[1]=(a[1]>a[0])?a[1]:a[0];
for(int i=2;i<n;i++){
	m[i]=(m[i-2]+a[i]<m[i-1])?m[i-1]:m[i-2]+a[i];
}

return m[n-1];
}


int main(){
int a[]={-2,11,-4,13,-5,2};
int n=sizeof(a)/sizeof(a[0]);
cout<<reconti(a,n)<<endl;
cout<<dpconti(a,n)<<endl;
cout<<dp2conti(a,n)<<endl;
return 0;
}
