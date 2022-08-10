#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
	int t,n;
	set<int> p;
	bool flag=false;
	cin>>t;
	while(t--){
		p.clear();
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
}
for(int i=n-1;i>=0;i--){
	if(p.find(arr[i]) != p.end()){
		flag=true;
		break;
	}else{
		 p.insert(arr[i]);
		 flag=false;
	}
}
if(flag==true){
	int total=n-p.size();
	cout<<total<<endl;
}else{
	cout<<0<<endl;
}

}
}
