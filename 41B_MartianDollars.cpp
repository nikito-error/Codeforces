#include<iostream>
using namespace std;
int main()
{
	int mx=2000;
    int n,b,a[mx+5],i,j,k,ans,cnt;
    while(cin>>n>>b)
    {
        for(i=0;i<n;i++) cin>>a[i];
        ans=b;
        for(i=0;i<n;i++)
        {
            k=b/a[i];
            for(j=i+1;j<n;j++)
            {
                cnt=b-k*a[i];
                cnt+=k*a[j];
                ans=max(ans,cnt);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
int main(){
	int r,n,ans,ans1;
	cin>>n>>r;
	int arr[n];
	int min=INT_MIN;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	if(i+1>=n){
		break;
	}
	if(arr[i+1]>arr[i]){
			if(min<arr[i+1]-arr[i]){
				min=arr[i+1]-arr[i];
			}
		}
}
	for(int i=0;i<n;i++){
		if(i+1>=n){
		break;
	}
	if(arr[i+1]>arr[i]){
			if(min==arr[i+1]-arr[i]){
				ans=r/arr[i];
				ans1=r%arr[i];
				ans=ans*arr[i+1]+ans1;
			}
		}
}
if(ans<=0){
	cout<<r;
}else{
cout<<ans;	
}
	
	
	return 0;
}
*/

