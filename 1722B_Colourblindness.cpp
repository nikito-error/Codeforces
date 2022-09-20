#include<iostream>
using namespace std;
int main(){
	int n,t;
	cin>>t;
	while(t>0){
		string s="";
		string s1="";
	int br=0;
	int count=0,count1=0;
	cin>>n;
	char grid[2][n];
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			cin>>grid[i][j];
		}
	}
	for(int i=0;i<2;i++){
		br++;
		for(int j=0;j<n;j++){
			if(grid[i][j]=='G'){
				grid[i][j]='B';
			}
			s+=grid[i][j];
			
		}
		if(br==1){
			s1=s;
			s="";
		}
}
if(s==s1){
	cout<<"YES"<<endl;
}else{
	cout<<"NO"<<endl;
}
	t--;
}
	return 0;
}
