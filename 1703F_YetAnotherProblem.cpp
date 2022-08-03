#include<iostream>
using namespace std;
int64_t s[200007],n,T,i,ans,x;
main(){cin>>T;while(T--){cin>>n;ans=0;for(i=1;i<=n;i++)cin>>x,s[i]=s[i-1]+(x<i),(x<i)?ans+=s[x-1]:7;cout<<ans<<'\n';}}

/*
//out of time
#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	ll n,t;
	cin>>t;
	while(t--){
	ll br=0;
	cin>>n;
	ll arr[n];
	for(ll i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			if(arr[i]<i && arr[j]<j && i<arr[j] && 1<=i && j<=n){
				br++;
			}
		}
	}
	
	cout<<br<<endl;
}	
}
*/
