#include<bits/stdc++.h>
using namespace std;
#define max 99999
int shortre(string s,string t){
	if(s.length()==0)
		return max;
	if(t.length()<=0)
		return 1;
	int k;
	for (k=0;k<t.length();k++)
		if(t[k]==s[0])
			break;
	if(k==t.length())
		return 1;

return min(shortre(s.substr(1),t),1+shortre(s.substr(1),t.substr(k+1)));
}

int shortest(string s,string t){
	 int m = s.length(), n = t.length();
    int dp[m+1][n+1];
    for (int i = 0; i <= m; i++)
        dp[i][0] = 1;
    for (int i = 0; i <= n; i++)
        dp[0][i] = max;
 
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = s[i-1];
            int k;
            for (k = j-1; k >= 0; k--)
                if (t[k] == ch)
                    break;

            if (k == -1)
                dp[i][j] = 1;
            else
               dp[i][j] = min(dp[i-1][j], dp[i-1][k] + 1);
        }
    }
 
    int ans = dp[m][n];
    if (ans >= max)
        ans = -1;
 
    return ans;

}

int main(){
string s="fapbpcidzezfyglhwihjvkxlgmznooqpqqxrosttnufviwfxlyszmmingpevzewzrtipqpoff";
string t="eaebvczdreafigzhmicjlkalmmbngodpfqdrcsltaubvfwtxmyuzjbkqiov";
cout<<shortest(s,t)<<endl;
return 0;
}
