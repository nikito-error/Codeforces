#include<bits/stdc++.h>
using namespace std;
 
unsigned long long int getIndex(vector<unsigned long long int> v, unsigned long long int K)
{
    auto it = find(v.begin(), v.end(), K);
  
    // If element was found
    if (it != v.end()) 
    {
      
        // calculating the index
        // of K
        unsigned long long int index = it - v.begin();
        return index;
    }
}
int main()
{ 
unsigned long long int n,m;
cin>>n>>m;
vector<unsigned long long int> g1;
vector<unsigned long long int> g2;
unsigned long long int a;
unsigned long long int b;
 	unsigned long long int max;
 	unsigned long long int t=0;
 	unsigned long long int result=0;
 	unsigned long long int index=0;
 for(unsigned long long int i=0;i<m;i++){
 	cin>>a>>b;
 		g1.push_back(a);
 		g2.push_back(b);
	 }
	 while(n>0){
	 	  max=0;
 for (auto i = g2.begin(); i != g2.end(); ++i){
 		if(*i>max){
	 		max=*i;
	 	index=getIndex(g2, max);
		 }
 }
 for (auto i = g1.begin(); i != g1.end(); ++i){
 		unsigned long long int a = g1[index];
 		t=a;
 		break;
		 }
		 if(n>t){
	 	n=n-t;
	 	result=result+t*max;
	 }else{
	 	result=result+n*max;
	 	break;
	 }
	 	g2.erase(g2.begin() + index);
	 	g1.erase(g1.begin() + index);
	 	if (g2.empty()) 
	 	{
	 		cout<<result;
	 		return 0;
		 }
	 }
		 		 cout<<result;
 }
 
 
/*
 	int n,m;
 	cin>>n>>m;
 	int a[m];
 	int b[m];
 	int max=0;
 	int t=0;
 	int result=0;
 	for(int i=0;i<m;i++){
 		cin>>a[i]>>b[i];
	 }
	 	while(n>0)
 	{
	 for(int i=0;i<m;i++){
	 	if(b[i]>max){
	 		max=b[i];
	 		t=a[i];
		 }
	 }
	 if(n>t){
	 	n=n-t;
	 	result=result+t*max;
	 }else{
	 	result=result+n*max;
	 	break;
	 }
	 }
	 cout<<result;
  */
