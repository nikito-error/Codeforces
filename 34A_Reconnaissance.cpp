#include<iostream>
using namespace std;
int main(){
	int min=9999;
	int next=0;
	int n;
	cin>>n;
	int arr[n];
	int first;
	int one;
	int second;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){
		if(arr[i]>arr[i+1]){
			next=arr[i]-arr[i+1];
		}else{
			next=arr[i+1]-arr[i];
		}
		if(min>next){
			min=next;
			one=i;
			second=i+1;
		}
		if(n==2){
			cout<<1<<" "<<2;
			return 0;
		}if(i==n){
		if(i==n){
		if(arr[n]>arr[1]){
			next=arr[n]-arr[1];
		}else{
			next=arr[1]-arr[n];
		}
		if(min>next){
			min=next;
			one=n;
			second=1;
		}
	
	}
		
	}
	}
		cout<<one<<" "<<second;
}

