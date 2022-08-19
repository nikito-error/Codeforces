 // Recursive C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;
 
/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
    if (start >= end)
    return;
     
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
     
    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1);
}    
 
 
/* Check if elements are equals */
bool printArray(int arr[],int arr1[], int size)
{
	bool flag=false;
   for (int i = 0; i < size; i++)
   {
   if(arr[i]==arr1[i]){
   	//cout<<arr[i]<<"_"<<arr1[i]<<endl;
   	flag=true;
   }else{
   	flag=false;
   	break;
   }
}
return flag;
}
/*
void printArray1(int arr[], int size){
	for (int i = 0; i < size; i++)
   {
   	cout<<arr[i]<<" ";
   }
   cout<<endl;
}
 */ 
/* Driver function to test above functions */
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
    // Function calling
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    			for(int i=0;i<n;i++){
    	arr1[i]=i+1;
}
    		 rvereseArray(arr1, i, j);
    		 //printArray1(arr1,n);
    		 if(printArray(arr1,arr, n)==true){
    		 	if(i==0 && j==0){
    		 		cout<<0<<" "<<0;
    		 		return 0;
				 }else{
				 	cout<<i+1<<" "<<j+1;
				 }
    	return 0;
	}
		}
	}
	cout<<0<<" "<<0;
     
    return 0;
}
