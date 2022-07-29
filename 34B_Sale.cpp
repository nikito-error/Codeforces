#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n];
	int ans=0,br=0;
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	
int n1 = sizeof(arr)/sizeof(arr[0]); 
sort(arr, arr+n1);   
for (int i = 0; i < n; i++) 
{
	if(arr[i]<=0){
	ans+=arr[i];
	br++;
	if(br==m){
		break;
	}
}
}
cout<<abs(ans);
}
	

