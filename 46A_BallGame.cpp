#include<iostream>
using namespace std;
int main(){
	int n,x=2,br=2;
	cin>>n;
	for(int i=0;i<n-1;i++){
		cout<<x<<" ";
		x=x+br;
		br++;
		if(x>n){
			x=x-n;
		}
	}
}
