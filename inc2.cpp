#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
void printar(int a[],int index){
	int flag=0;
	for(int i=0;i<index;i++){
		if(a[i]>=a[i+1]&&((i+1)!=index)){
			flag=1;
			break;}
	}
	if(flag!=1){
	for(int i=0;i<index;i++){
		cout<<a[i];
	}cout<<endl;}
}
void printre(int a[],int n,int k,int index){
	int i;
	if(k==0)
		printar(a,index);
	if(k>0){
		for(int i=1;i<=n;++i){
		a[index]=i;
		printre(a,n,k-1,index+1);
		}
	}
}
void printse(int n,int k){
	int *arr=new int[k];
	printre(arr,n,k,0); 
}
int main(){
	int k=2;
	int n=9;
	printse(n,k);
	return 0;	

}
