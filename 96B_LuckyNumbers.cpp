#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	string y;
	cin>>n;
	while(1)
	{
		y+="47";
		sort(y.begin(),y.end());
		do
		{
			if(stoll(y)>=n)
			return cout<<stoll(y),0;
		}while(next_permutation(y.begin(),y.end()));
	}
}
