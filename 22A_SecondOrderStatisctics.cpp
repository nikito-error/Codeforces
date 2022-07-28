#include<iostream>
#include<set>

using namespace std;
 
int main()
{
 
    // Empty Set
    set<int> set1;
    int n,element;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>element;
    	set1.insert(element);
	}


    set<int> :: iterator it=next(set1.begin(),1);
	if(set1.find(*it) != set1.end()){
	cout<<*it<<endl;	
	}else{
		cout<<"NO";
	}


return 0;
}
