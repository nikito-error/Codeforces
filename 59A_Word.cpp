#include <bits/stdc++.h>
using namespace std;
bool count(string f){
	int lower=0;
	int upper=0;
	bool flag=false;
	for(int i=0;i<f.length();i++){
		if(f.at(i)>='A' && f.at(i)<='Z'){
			upper++;
		}else if(f.at(i)>='a' && f.at(i)<='z'){
			lower++;
		}
	}
	if(upper>lower){
		flag=true;
	}else{
		flag=false;
	}
	return flag;
}
int main()
{
	string str;
	cin>>str;
	if(count(str)==true){
		for_each(str.begin(), str.end(), [](char & c) {
        c = ::toupper(c);
    });
	}else{
		for_each(str.begin(), str.end(), [](char & c) {
        c = ::tolower(c);
	});
}	
	   cout<<str;
	return 0;
}
