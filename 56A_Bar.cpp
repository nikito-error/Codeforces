#include<iostream>
#include<string>
using namespace std;
bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}
int main(){
	string str;int n,p,br=0;
	string arr[11]={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>str;
	if(isNumber(str)){
		p=stoi(str);
		if(p<18){
			br++;
		}
	}else{
		for(int i=0;i<11;i++){
			if(arr[i]==str){
				br++;
			}
		}
	}
}
cout<<br;
	return 0;
}
