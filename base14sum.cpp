#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>

using namespace std;

string base14Sum(string A,string B){
	string C;
unordered_map<int,char> hash;
for(int i=0;i<9;i++){
	hash[i]=(char)i;
}	
hash[10]='a';
hash[11]='b';
hash[12]='c';
hash[13]='d';
for(int i=0;i<14;i++){
cout<<hash[i];
}
/*
	int c=0;
	int i=0;
	int j=0;
	reverse(A.begin(),A.end());	
	while(A!='\0'||B!='\0'){
		hash.find(A[i])+hash.find(B[i]);
	}*/		
return C;
}
int main(){
string a="a43d";
string b="9872";
string c;
c= base14Sum(a,b);
cout<<c;
return 0;
}
