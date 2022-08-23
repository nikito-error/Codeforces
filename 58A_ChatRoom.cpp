#include <bits/stdc++.h>
using namespace std;
int main()
{
    int br=0;
	string s1;
	string s2="hello";
	cin>>s1;
	int j=0;
	for(int i=0;i<s2.length();i++)
    {
        for(j;j<s1.length();j++)
        {
            if(s1[j]==s2[i])
            {
                br++;
                s1[j]=' ';
 
                break;
 
            }
        }
    }
    if(br==5)
    {
       cout<<"YES";
 
    }
    else{
        cout<<"NO";
    }
}
