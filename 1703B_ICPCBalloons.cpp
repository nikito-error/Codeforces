#include <bits/stdc++.h>
using namespace std;
 
#define SIZE 26
 
// function to print the character and its frequency
// in order of its occurrence
void prCharWithFreq(string s)
{
	int sum =0;
  // Store all characters and
  // their frequencies in dictionary
  unordered_map<char, int> d;
 
  for(char i : s)
  {
    d[i]++;
  }
 
  // Print characters and their
  // frequencies in same order
  // of their appearance
  for(char i : s)
  {
    // Print only if this
    // character is not printed
    // before
    if(d[i] != 0)
    {
    	if(d[i]>=1){
      	d[i]=d[i]+1;
	  }
	  sum=sum+d[i];
      d[i] = 0;
    }
  }
   cout<< sum<< " ";
}
int main(){
	int t,n;char c;
	string str;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		str="";
		for(int j=0;j<n;j++){
			cin>>c;
			str=str+c;
		}
		prCharWithFreq(str);
	}
	
	
	
	
	
	return 0;
}
