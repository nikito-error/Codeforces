#include<iostream>
using namespace std;
int main(){
string F;
string M;
string S;
	cin>>F>>M>>S;
	if((F=="rock" && M=="scissors" && S=="scissors") || (F=="scissors" && M=="paper" && S=="paper") || (F=="paper" && M=="rock" && S=="rock")){
		cout<<"F";
	}else if((M=="rock" && F=="scissors" && S=="scissors") || (M=="scissors" && F=="paper" && S=="paper") || (M=="paper" && F=="rock" && S=="rock")){
		cout<<"M";
	}else if((S=="rock" && M=="scissors" && F=="scissors") || (S=="scissors" && M=="paper" && F=="paper") || (S=="paper" && M=="rock" && F=="rock")){
		cout<<"S";
	}else {
		cout<<"?";
	}
}
