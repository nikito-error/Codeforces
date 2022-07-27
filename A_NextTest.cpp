#include <iostream>
#include<bits/stdc++.h>
using namespace std;
   
int main(){
    int input[3001], count, i, min;

    cin >> count;

    for(i = 0; i < count; i++){
        cin >> input[i];
    }

    min = 1;
       sort(input,input+count);
       int k=0;
    for(int i=0;i<count;i++){
        k++;
        int f=0;
        f=min+i;
        if(input[i]!=f){
            min=f;
            break;
        }
        if(k==count){
            min=k+1;
            break;
        }
    }
    cout<<min;
 
    return 0;
}