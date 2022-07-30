#include <bits/stdc++.h>
using namespace std;
  
void countFreq(int arr[], int n)
{
    // Mark all array elements as not visited
    vector<bool> visited(n, false);
  	int max=0;
  	int br=0;
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++) {
  
        // Skip this element if already processed
        if (visited[i] == true)
            continue;
  
        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        br++;
        if(count>max){
        	max=count;
		}
    }
    cout<<max<<" "<<br;
}
  
int main()
{	
 	int n;
	cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
    int n1 = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n1);
    return 0;
}
