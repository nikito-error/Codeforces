#include<iostream>
using namespace std;
int main(){
	int s,m,l,xl,xxl,n;string no;
	cin>>s>>m>>l>>xl>>xxl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>no;
		if(no=="S"){
			if(s>0){
				cout<<"S";
				s--;
			}else if(m>0){
				cout<<"M";
				m--;
			}else if(l>0){
				cout<<"L";
				l--;
			}else if(xl>0){
				cout<<"XL";
				xl--;
			}else if(xxl>0){
				cout<<"XXL";
				xxl--;
			}
			cout<<endl;
		}else if(no=="M"){
			if(m>0){
				cout<<"M";
				m--;
			}else if(l>0){
				cout<<"L";
				l--;
			}else if(s>0){
				cout<<"S";
				s--;
			}
			else if(xl>0){
				cout<<"XL";
				xl--;
			}
			else if(xxl>0){
				cout<<"XXL";
				xxl--;
			}
			cout<<endl;
     	}else if(no=="L"){
			if(l>0){
				cout<<"L";
				l--;
			}else if(xl>0){
				cout<<"XL";
				xl--;
			}else if(m>0){
				cout<<"M";
				m--;
			}else if(xxl>0){
				cout<<"XXL";
				xxl--;
			}else if(s>0){
				cout<<"S";
				s--;
			}
			cout<<endl;
		}else if(no=="XL"){
			if(xl>0){
				cout<<"XL";
				xl--;
			}else if(xxl>0){
				cout<<"XXL";
				xxl--;
			}else if(l>0){
				cout<<"L";
				l--;
			}else if(m>0){
				cout<<"M";
				m--;
			}else if(s>0){
				cout<<"S";
				s--;
			}
			cout<<endl;
		}else if(no=="XXL"){
			if(xxl>0){
				cout<<"XXL";
				xxl--;
			}else if(xl>0){
				cout<<"XL";
				xl--;
			}else if(l>0){
				cout<<"L";
				l--;
			}else if(m>0){
				cout<<"M";
				m--;
			}else if(s>0){
				cout<<"S";
				s--;
			}
			cout<<endl;
		}
		
	}
	
	return 0;
}
