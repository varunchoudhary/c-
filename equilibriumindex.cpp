#include<iostream>
#define FOR(a,b,c) for(a=b;a<c;a++)
using namespace std;
int eqSum(int a[],int n){
	int sum=0;
	int leftsum=0;
	for(int i=0;i<n;i++)
		sum+=a[i];
	int j;
	for(int j=0;j<n;j++){
		sum-=a[j];
		if(leftsum==sum)
			return j;
		leftsum+=a[j];
	}
	return -1;
	
}
int main(){
	int a[]={-7,1,5,2,-4,3,0};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<eqSum(a,n)<<endl;
return 0;
}
