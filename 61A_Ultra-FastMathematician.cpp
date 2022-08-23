#include<bits/stdc++.h>
using namespace std;
int main(){
	string str,str1;
	int one,two,ans;
	cin>>str>>str1;
	for(int i=0;i<str.size();i++){
		one=(int)(str.at(i));
		two=(int)(str1.at(i));
		ans=one^two;
		cout<<ans;
	}
	return 0;
}
