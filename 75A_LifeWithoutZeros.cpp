#include<iostream>
#include<string>
using namespace std;
int main(){
	string a,b;
	string c,d;
	cin>>a;
	cin>>b;
	int a1,b1,c1;string c2,ans;
	int ans1,ans2;
	a1=stoi(a);
	b1=stoi(b);
	c1=a1+b1;
	c2=to_string(c1);
		for(int i=0;i<c2.length();i++){
		if(c2.at(i)!='0'){
			ans=ans+c2.at(i);
		}
	}
	for(int i=0;i<a.length();i++){
		if(a.at(i)!='0'){
			c=c+a.at(i);
		}
	}
		for(int i=0;i<b.length();i++){
		if(b.at(i)!='0'){
			d=d+b.at(i);
		}
	}
	ans1=stoi(ans);
	a1=stoi(c);
	b1=stoi(d);
	ans2=a1+b1;
	if(ans1==ans2){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
