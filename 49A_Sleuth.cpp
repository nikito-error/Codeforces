#include<iostream>
using namespace std;
int main(){
string str;
char arr[6]={'A', 'E', 'I', 'O','U', 'Y'};
char arr1[20]={'B', 'C','D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W','X', 'Z'};
char arr2[6]={'a', 'e', 'i', 'o','u', 'y'};
char arr4[20]={'b', 'c','d', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w','x', 'z'};

getline(cin,str);
for(int j=0;j<str.size();j++){
for(int i = str.size()-1-j; i < str.size()-j; ++i) {
	for(int k=0;k<6;k++){
    if(str[i]==arr[k] || str[i]==arr2[k]){
    	cout<<"YES";
    	return 0;
	}
	for(int k=0;k<20;k++){
	{
	if(str[i]==arr1[k] || str[i]==arr4[k]){
		cout<<"NO";
		return 0;
	}
}	
	
}
}
}
}
	return 0;

}
