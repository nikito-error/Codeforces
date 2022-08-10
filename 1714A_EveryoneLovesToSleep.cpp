#include<iostream>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int N,H,M,ans=1e9;
	cin>>N>>H>>M;
	int sleep=60*H+M;
	for(int i=0;i<N;i++){
		cin>>H>>M;
		int alarm=60*H+M;
		ans=min(ans,(alarm +1440-sleep)%1440);
		
	}
	cout<<ans/60<<" "<<ans%60<<endl;
}
	return 0;
}
