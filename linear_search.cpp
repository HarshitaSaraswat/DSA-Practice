#include <bits/stdc++.h>
using namespace std;

void linear_search1(int arr[],int n,int target){
    
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<i;
        }
    }
    
}
int main(){
    int n=5;
    int arr1[5]={1,2,3,4,5};
    int target=4;
    linear_search1(arr1, n, target);
    return 0;
}