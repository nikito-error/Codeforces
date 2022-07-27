
#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n,m;
       cin>>n>>m;
       int br=1;
       char arr[n][m];
       for(int i=0;i<n;i++)
     	 {
    	for(int j=0;j<m;j++)
       		{
       		cin>>arr[i][j];
	}
}
	   
	    for(int i=0;i<n;i++){
	    	br=1;
       	for(int j=0;j<m;j++)
       	{
       		if(arr[i][j]==arr[i][j+1]){
    			br++;
			   }
		   }
		   if(br==m){
		   		
		   }else{
		   	cout<<"No";
		   	break;
		   }
		   cout<<endl;
	   }
	   if(br==m){
	   	 cout<<"Yes";
	   }
}

