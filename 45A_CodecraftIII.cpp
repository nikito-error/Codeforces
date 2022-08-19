#include<iostream>
using namespace std;
int recursive(int result){
	if(result>=12){
		result=result-12;
	}else{
		return result;
	}
	return 1*recursive(result);
}
int main(){
	string arr[12]={ "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November","December"};
	string p;int k,result;
	cin>>p;
	cin>>k;
	for(int i=0;i<12;i++){
		if(arr[i]==p){
			result=i+k;
		}
	}
	int ans = recursive(result);
	for(int i=0;i<12;i++){
		if(i==ans){
			cout<<arr[i];
			break;
		}
	}

	return 0;
}
