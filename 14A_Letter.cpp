#include<iostream>
using namespace std;
int main(){
	int row,cols;
	int min=999;
	int max=0;
	int max1=0;
	int min1=999;
	cin>>row>>cols;
	char arr[row][cols];
	for(int i=0;i<row;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
		}		
	}
		for(int i=0;i<row;i++){
		for(int j=0;j<cols;j++){
			if(arr[i][j]=='*'){
				if(max1<=i){
					max1=i;
				}
					if(min>=j){
						min=j;
						break;
					}
				}
			}	
		}
		for(int i=row-1;i>=0;i--){
		for(int j=cols-1;j>=0;j--){
			if(arr[i][j]=='*'){
				if(min1>=i){
					min1=i;
				}
					if(max<=j){
						max=j;
						break;
					}
				}
			}	
		}
		
		
 
	for(int i=min1;i<=max1;i++){
		for(int j=min;j<=max;j++){
			cout<<arr[i][j];			
		}
		cout<<endl;
	}
	
}
