#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int n;
    string a;
    cin>>n;
    cin>>a;
    if(n%3==0 && n%2!=0){
            cout<<a[0]<<a[1]<<a[2];
        for(int i=3;i<n;i=i+3){
            cout<<'-'<<a[i]<<a[i+1]<<a[i+2];
        }
        cout<<endl;
    }
    else if(n%3==1){
        cout<<a[0]<<a[1];
        for(int i=2;i<n-2;i=i+3){
            cout<<'-'<<a[i]<<a[i+1]<<a[i+2];
        }
        cout<<'-'<<a[n-2]<<a[n-1];
        cout<<endl;
    }
    else if(n%3==2){
        cout<<a[0]<<a[1];
        for(int i=2;i<n;i=i+3){
            cout<<'-'<<a[i]<<a[i+1]<<a[i+2];
        }
    cout<<endl;
    } else{
    	cout<<a[0]<<a[1];
        for(int i=2;i<n;i=i+2){
            cout<<'-'<<a[i]<<a[i+1];
        }
        cout<<endl;
	}
    return 0;
}

