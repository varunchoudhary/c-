#include<iostream>
#include<string>

using namespace std;

int edits(string s,string a,int l1,int l2){
	int dp[l1+1][l2+1];

	for(int i=0;i<=l1;i++){
	for(int j=0;j<=l2;j++){
	if(i==0)
		dp[i][j]=j;
	if(j==0)
		dp[i][j]=i;
	if(s[i-1]==a[j-1])
		dp[i][j]=dp[i-1][j-1];
	else
		dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
			
	}} 
	return dp[l1][l2];
}

int main(){
	string s="abcd";
	string a="gadcb";
	int l1=s.length();
	int l2=a.length();
	cout<<edits(s,a,l1,l2);
}


