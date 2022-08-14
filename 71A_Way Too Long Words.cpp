#include<iostream>
using namespace std;
int main(){
	int n,f,l;
	cin>>n;
	string str;
while(n--){
	cin>>str;
		l=str.length();
	if(l>10){
			f=str.length()-2;
	cout<<str[0]<<f<<str[l-1]<<endl;
	}else{
		cout<<str<<endl;
	}
}
return 0;
}
