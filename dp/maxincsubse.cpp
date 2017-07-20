#include<iostream>
//maximum increaseing subsequence
using namespace std;
int maxincseq(int *a,int n){
int l[n];
for(int i=0;i<n;i++)
	l[i]=1;
for(int i=0;i<n;i++)
	for(int j=0;j<i;j++){
		if(a[i]>a[j]&&l[i]<l[j]+1){
			l[i]=l[j]+1;
		}
	}
int max=0;	
for(int i=0;i<n;i++){
	if(max<l[i])
		max=l[i];
}
return max;
}
int main(){
int a[]={5,6,2,3,4,1,9,9,8,9,5};
int n=sizeof(a)/sizeof(a[0]);
cout<<maxincseq(a,n)<<endl;


}

