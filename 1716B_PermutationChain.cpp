#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
    int n, temp;
    cin>>n;
    int arr[n];
    int br=-1;
    int br1=-2;
    int j=0;
    for(int i = 0;i<n;i++){
    	j++;
        arr[i]=j;
    }
    cout<<n<<endl;
    for(int j=0;j<n;j++)
    {
    	br++;
    	br1++;
    	if(br>=1){
    temp = arr[br1];
    arr[br1] = arr[n-1];
    arr[n-1] = temp;
}
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
}

    return 0;
}
