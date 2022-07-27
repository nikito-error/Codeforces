
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cin>>n;
    int j=0,d=0;
    int f=1;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    	if(arr[i]%2==0){
    		d++;
		}else{
			j++;
		}
	}
	if(d==1){
		for(int i=0;i<n;i++){
			if(arr[i]%2==0){
				cout<<i+1;
		}
	}
	}else if(j==1){
		for(int i=0;i<n;i++){
			if(arr[i]%2!=0){
				cout<<i+1;
		}
		
	}
}
}
