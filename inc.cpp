#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	int n=2;
	for(int i=pow(10,n-1);i<pow(10,n);i++){

		int a[10];
		int k=0;
		int num=i;	
		while(num!=0){
			a[k++]=num%10;
			num=num/10;
		}
		reverse(a,a+k);
		int flag=0;
		for(int m=0;m<k;m++){
			if(a[m]>=a[m+1]){
				//cout<<a[m];	
				flag=1;	
				break;
			}
		}
		cout<<flag;
		if(flag!=0){
			for(int m=0;m<k;m++){
				cout<<a[m]<<endl;
		}}
	}
	return 0;	

}
