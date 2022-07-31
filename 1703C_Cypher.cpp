#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n,f;
	string str;
	char c;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		int arr[n];
		for(int j=0;j<n;j++){
			cin>>arr[j];
	}
	for(int k=0;k<n;k++){
		cin>>f;
		str="";
		int sum=0;
		for(int d=0;d<f;d++){
			cin>>c;
			str=str+c;
		}
	
		reverse(str.begin(), str.end());
		for(int l=0;l<str.size();l++){
			if(str.at(l)=='D'){
				if(arr[k]==9){
					arr[k]=-1;
				}
				arr[k]=arr[k]+1;
			}
			if(str.at(l)=='U'){
				if(arr[k]==0){
					arr[k]=10;
				}
				arr[k]=arr[k]-1;
			}
		}
		cout<<arr[k];cout<<" ";
		if(k==n-1){
			cout<<endl;
		}
	}
	
}
	return 0;
}
