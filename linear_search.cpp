#include <bits/stdc++.h>
using namespace std;

void linear_search(int arr[],int n,int target){
    
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<i;
        }
    }
    
}
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int target=4;
    linear_search(arr, n, target);
    return 0;
}