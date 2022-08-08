#include<iostream>
#include<map>
using namespace std;
int main(){
	bool flag=true;
	map<char,int> mp;
	map<char, int>::iterator it;
	map<char,int> mp1;
	map<char, int>::iterator it1;
	string str;
	string str1;
	int br=1;
	int br1=1;
	getline(cin,str);
	getline(cin,str1);
	for(int i=0;i<str.size();i++){
		if(str.at(i)!=' '){
		it = mp.find(str.at(i));
		if (it != mp.end()){
			it->second++;
		}else{
			mp.insert(pair<char, int>(str.at(i), br));
		}
	}
		
	}
		for(int i=0;i<str1.size();i++){
			if(str1.at(i)!=' '){
		it1 = mp1.find(str1.at(i));
		if (it1 != mp1.end()){
			it1->second++;
		}else{
			mp1.insert(pair<char, int>(str1.at(i), br1));
		}
	}
		
	}
	for(auto it1 = mp1.cbegin(); it1 != mp1.cend(); ++it1)
{
		for(auto it = mp.cbegin(); it != mp.cend(); ++it)
		{
 		if(it->first==it1->first && it->second>=it1->second){
 			flag=true;
 			break;
		 }else{
		 	flag=false;
		 }
}
if(flag==false){
	flag=false;
	break;
}else {
	flag=true;
}
}
if(flag==true){
	cout<<"YES";
}else{
	cout<<"NO";
}
return 0;
}
