#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int br=0;
	int c=0;
	for(int i=0;i<str.size();i++){
		if(str.at(i)=='1'){
			c++;
		}else{
			c=0;
		}
		if(str.at(i)=='0'){
			br++;
		}else{
			br=0;
		}
		if(br==7 || c==7){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
