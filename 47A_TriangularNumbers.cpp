#include<iostream>
using namespace std;
int main(){
	int n;
	bool flag=true;
	int arr[32]={0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496};
	cin>>n;
	for(int i=0;i<32;i++){
		if(arr[i]==n){
			flag=true;
			break;
		}else{
			flag=false;
		}
	}
	if(flag==true){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
