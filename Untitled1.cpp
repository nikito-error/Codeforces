#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		map<int,int>myMap;
		while(n--)
		{
			int x;
			cin>>x;
			++myMap[x];
		}
		int cnt=0;
		for(auto it= myMap.begin();it!=myMap.end();it++)
		{
			cnt+=it->second/3;
		}
		cout<<cnt<<endl;
	}
}
