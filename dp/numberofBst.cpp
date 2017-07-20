#include<iostream>

using namespace std;
int numberBst(int n){
	if(n==0)
		return 1;
	int count =0;
	for(int i=1;i<=n;i++)
		count+=numberBst(i-1)*numberBst(n-i);
	return count;
}
int dp[1024];
int dpnumberBst(int n){
if(dp[n]!=1)
	return dp[n];
dp[n]=0;
for(int i=1;i<=n;i++)
	dp[n]+=dpnumberBst(i-1)*dpnumberBst(n-i);
return dp[n];
}

int main(){
	int n;
	cin>>n;
	int *dp=new int[n+1];
	for(int i=0;i<=n;i++)
		dp[i]=1;
	cout<<numberBst(n)<<endl;	
	cout<<dpnumberBst(n)<<endl;
}
