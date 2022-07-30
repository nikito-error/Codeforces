#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool compareChar(char & c1, char & c2)
{
    if (c1 == c2)
        return true;
    else if (std::toupper(c1) == std::toupper(c2))
        return true;
    return false;
}
/*
 * Case Insensitive String Comparision
 */
bool caseInSensStringCompare(std::string & str1, std::string &str2)
{
    return ( (str1.size() == str2.size() ) &&
             std::equal(str1.begin(), str1.end(), str2.begin(), &compareChar) );
}
int main(){

int n;
cin>>n;
string str2="Yes",str1;
for(int i=0;i<n;i++){
	cin>>str1;
	if(caseInSensStringCompare(str1, str2)){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
}
}
