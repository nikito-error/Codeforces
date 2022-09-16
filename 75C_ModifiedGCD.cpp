//seen from others
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,n,l,r;
set<ll> v;
int main(){
    cin>>a>>b>>n;
    a=__gcd(a,b);
    for (int i=1;i*i<=a;i++) if (a%i==0){v.insert(i); if (i*i!=a) v.insert(a/i);}
    while(n--) {
        cin>>l>>r;
		int t=*--v.upper_bound(r);
		cout<<(l>t?-1:t)<<"\n";
    }
}


/* out of time


#include<iostream>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b,ll l,ll h)
{
    int result = min(a, b); // Find Minimum of a nd b
    while (result > 0) {
        if (a % result == 0 && b % result == 0 && result>=l && result<=h) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}
 
// Driver program to test above function
int main()
{
    ll a,b,n,l,h;
    cin>>a>>b>>n;
    for(int i=0;i<n;i++){
    	cin>>l>>h;
    	if(gcd(a, b,l,h)>=l && gcd(a, b,l,h)<=h){
    		cout<<gcd(a, b,l,h)<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
    return 0;
}
*/
