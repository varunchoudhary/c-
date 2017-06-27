#include<iostream>

using namespace std;

int points(vector<int> &a,vector<int> &b){

	if(a.size()==0 || b.size()==0){
		return 0;
	}
	unordered_map<double,int>myMap;
	int sol;
	for(int i=0;i<a.size();i++){
		int duplicate=1;
		int vertical=0;
		for(int j=i+1;j<a.size();j++){
			if(a[i]==a[j]){
				if(b[i]==b[j]){
					duplicate++;
				}
				else{
					vertical++;
				}
			}
			else{
				double slope=0.0;
				double x=a[i]-a[j];
				double y=b[i]-b[j];
				if(b[i]!=b[j]){
					slope=(1.0*(y/x));
				}
				if(mymap.find(slope) != myMap.end()){
					myMap[slope]++;
				}else{
					slope=1;
				}
			
			}
		}
	}
	
	auto it=myMap.begin();
	while(it != myMap.end()){
		int t = it->second;
		if((t+duplicate)>sol){
			sol=t+duplicate;
		}
		it++;
	}
	if((vertical+duplicate)>sol){
		sol=verical+duplicate;
	}
	return sol;
}
