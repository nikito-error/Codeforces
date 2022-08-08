#include<iostream>
#include<map>
using namespace std;
int main(){
	int max=0;
	string print;
	int n;cin>>n;
	map<string,int> mp;
	map<string, int>::iterator it;
	string str;
	int br=1;
	for(int i=0;i<n;i++){
		cin>>str;
		it = mp.find(str);
		if (it != mp.end()){
			it->second++;
		}else{
			mp.insert(pair<string, int>(str, br));
		}
		
	}
	
	for(auto it = mp.cbegin(); it != mp.cend(); ++it)
{
 	if(max<it->second){
 		max=it->second;
 		print=it->first;
	 }   
}
cout<<print;
	
	return 0;
}
