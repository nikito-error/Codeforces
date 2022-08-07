#include<iostream>
using namespace std;
int main(){
	string a1;
	string b1;
	string c1;
	int a=0;int b=0;int c=0;
	cin>>a1>>b1>>c1;
	if(a1=="A>B" || b1=="A>B" || c1=="A>B")
	{
	a=a+1;
	b=b-1;
	}
	if(a1=="A<B" || b1=="A<B" || c1=="A<B"){
	a=a-1;
	b=b+1;
	} 
	if(a1=="A>C" || b1=="A>C" || c1=="A>C"){
	a=a+1;
	c=c-1;
	} 
	if(a1=="A<C" || b1=="A<C" || c1=="A<C"){
	a=a-1;
	c=c+1;
	}
	if(a1=="C>B" || b1=="C>B" || c1=="C>B")
	{
	c=c+1;
	b=b-1;
	} 
	if(a1=="C<B" || b1=="C<B" || c1=="C<B"){
		c=c-1;
		b=b+1;
	} 
	if(a1=="C>A" || b1=="C>A" || c1=="C>A"){
	c=c+1;
	a=a-1;
	} 
	if(a1=="C<A" || b1=="C<A" || c1=="C<A"){
		c=c-1;
		a=a+1;
	}
	 if(a1=="B>C" || b1=="B>C" || c1=="B>C")
	{
	b=b+1;
	c=c-1;
	} 
	if(a1=="B<C" || b1=="B<C" || c1=="B<C"){
		b=b-1;
		c=c+1;
	} 
	if(a1=="B>A" || b1=="B>A" || c1=="B>A"){
		b=b+1;
		a=a-1;
	} 
	if(a1=="B<A" || b1=="B<A" || c1=="B<A"){
		b=b-1;
		a=a+1;
	}
	if(a<b && a<c){
		cout<<"A";
	}else if(b<a && b<c){
		cout<<"B";
	}else if(c<a && c<b){
		cout<<"C";
	}
	if(a>b && a<c){
		cout<<"A";
	}else if(a>c && a<b){
		cout<<"A";
	}else if(b>a && b<c){
		cout<<"B";
	}else if(b<a && b>c){
		cout<<"B";
	}
	else if(c>b && c<a){
		cout<<"C";
	}
	else if(c<b && c>a){
		cout<<"C";
	}
		if(a>b && a>c){
		cout<<"A";
	}else if(b>a && b>c){
		cout<<"B";
	}else if(c>a && c>b){
		cout<<"C";
	}
	
	if(a==b || a==c || b==c){
			system("cls");
		cout<<"Impossible";
	}

}
