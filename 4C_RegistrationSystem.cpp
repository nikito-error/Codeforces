#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<string,int>p;
	string str;
	for(int i=0;i<n;i++){
		cin>>str;
			map<string, int>::iterator it = p.find(str);
		if(it != p.end()){
			it->second++;
			cout<<it->first<<it->second-1<<endl;
		}else{
			p.insert(make_pair(str, 1));
			cout<<"OK"<<endl;
		}
	}
	return 0;
}
