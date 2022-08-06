#include<iostream>
using namespace std;
int main(){
	int n,a,b,max=0,ans2=0,next=0;
	cin>>n;
	int arr[n-1];
	int arr1[2];
	for(int i=0;i<n-1;i++){
		cin>>arr[i];
	}
	for(int i=0;i<2;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<2;i++){
		if(arr1[0]>arr1[1]){
			max=arr1[0];
		}else{
			max=arr1[1];
			next=arr1[0];
		}
		
	}
	for(int i=next;i<max;i++){
		ans2=ans2+arr[i-1];
	}
	cout<<ans2;
	
}
