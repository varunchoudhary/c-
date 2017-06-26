#include<iostream>
using namespace std;
void swap(int a,int b){
int t=a;
a=b;
b=t;
}
int partion(int a[],int low,int high){
	int i,j,pivotitem;
	pivotitem=a[low];
	j=low;
	for(i=low+1;i<=high;i++)
		if(a[i]<pivotitem){
			j++;
		swap(a[i],a[j]);	
	}	
	int pivotpoint=j;
	swap(a[low],a[pivotpoint]);
	return pivotpoint;
}
int selection(int a[],int low,int high,int k){
	int pivotpoint;
	if(low==high)
		return a[low];
	else{
		pivotpoint=partion(a,low,high);
		if(k==pivotpoint)
			return a[pivotpoint];
		else if(k<pivotpoint)
			return selection(a,low,pivotpoint-1,k);
		else 
			return selection(a,pivotpoint+1,high,k);
	}
}

int main(){
 int a[]={3,2,7,4,8,1,9};
 int n=sizeof(a)/sizeof(a[0]);
 cout<<selection(a,0,n,4)<<endl;

}
