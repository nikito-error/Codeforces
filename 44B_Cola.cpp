#include <bits/stdc++.h>
using namespace std;
int main(){
   long long i,j,aa,n,a,b,c,ck=0;
   cin>>n>>a>>b>>c;
   for(i=0; i<=c; i++){
      for(j=0; j<=b; j++){
         aa = (n - 2*i -j)*2;
         if(aa>=0 && aa<=a)
            ck++;
      }
   }
    cout<<ck;
}


/* Ne e optimalno reshenieto ...  test 24 out of time
// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
 
// Function to find all unique combination of
// given elements such that their sum is K
void unique_combination(double l, double sum, double K,
                        vector<double>& local,
                        vector<double>& A,int *br)
{
    // If a unique combination is found
    if (sum == K) {
             *br+=1;
        return;
    }
    if(*br>=100){
    	return;
	}
 
    // For all other combinations
    for (int i = l; i < A.size(); i++)
    {
 
        // Check if the sum exceeds K
        if (sum + A[i] > K)
            continue;
 
        // Check if it is repeated or not
        if (i > l and A[i] == A[i - 1])
            continue;
 
        // Take the element into the combination
        local.push_back(A[i]);
        // Recursive call
        unique_combination(i + 1, sum + A[i], K, local, A,br);
 
        // Remove element from the combination
        local.pop_back();
    }
}
 
// Function to find all combination
// of the given elements
void Combination(vector<double> A, double K)
{
	int br=0;
    // Sort the given elements
    sort(A.begin(), A.end());
    // To store combination
    vector<double> local;
    unique_combination(0, 0, K, local, A,&br);
   	cout<<br;
}
int main()
{	
	
	int a,b,c,d;
	cin>>d;
	cin>>a>>b>>c;
   vector<double> ar;
for(int i=0;i<a;i++){
		ar.push_back(0.5);
	}
	for(int i=a;i<b+a;i++){
		
			ar.push_back(1);
	}
	for(int i=b+a;i<b+a+c;i++){
		ar.push_back(2);
	}
    int n = ar.size();
 
    
    int K = d;
    // Function call
    Combination(ar, K);
 
    return 0;

}
*/
 
