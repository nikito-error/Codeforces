#include<iostream>
using namespace std;
int main()
{
int n,s=0,t,m=1e5;
cin>>n;
while (n--)
{
cin>>t,
s+=t,t%2?m=min(m,t):0;
}
cout<<(s%2?s:max(0,s-m));
return 0;
}
