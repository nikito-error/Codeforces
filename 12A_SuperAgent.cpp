#include <iostream>
using namespace std;
  
// Driver code
int main()
{
	int n=9;
    char mat[n];
	for(int i=0;i<n;i++){
		cin>>mat[i];
	}
for (int i = 0, j = n - 1; i < j; i++, j--) {
    if (mat[i] != mat[j]) {
        printf("NO");
        return 0;  // No point in running this function any longer at this point.
    }
}
 
// If the function didn't return in the for loop, the array is symmetrical.
printf("YES");
}
