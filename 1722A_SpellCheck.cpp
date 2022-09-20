#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
bool arePermutation(string str1, string str2)
{
    // Get lengths of both strings
    int n1 = str1.length();
    int n2 = str2.length();
 
    // If length of both strings is not same,
    // then they cannot be Permutation
    if (n1 != n2)
      return false;
 
    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
 
    // Compare sorted strings
    for (int i = 0; i < n1;  i++)
       if (str1[i] != str2[i])
         return false;
 
    return true;
}
int main(){
	int t,n;
	bool flag=true;
	string s1="Timur";
	cin>>t;
	while(t>0){
		string s="";
		cin>>n;
		cin>>s;
		if (arePermutation(s,s1))
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
      t--;
	}
	
	return 0;
}
