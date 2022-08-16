#include<iostream>
#include<set>
using namespace std;
int main(){
	int n;
	cin>>n;
	int br=0;
	set<string> st;
	while(n--){
		string result="";
		string str,str1;
		cin>>str>>str1;
		result=str+"1"+str1;
		st.insert(result);
	}
	cout<<st.size();
	return 0;
}
