#include <cstdio>  
#include <cstring>  
#include <iostream>  
#include <algorithm>  
#define ll long long  
  
using namespace std;  
int sum=1;  
int n;  
  
void dfs(int x)  
{  
if(x*10<=n)  
{  
sum++;  
dfs(x*10);  
}  
if(x*10+1<=n)  
{  
sum++;  
dfs(x*10+1);  
}  
}  
int main()  
{  
cin>>n;  
dfs(1);  
cout<<sum<<endl;  
return 0;  
}  
