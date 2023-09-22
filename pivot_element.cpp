#include <bits/stdc++.h>
using namespace std;

int max_pivot_element(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    
    while(start<=end){
        if(start==end){
            return start;
        }
        if(arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid]<arr[mid-1]){
            return mid-1;
        }
        if(start>mid){
            end=mid-1;
        }
        if (start<mid){
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;


}

int main(){
    int n=8;
    int arr1[]={14,15,16,18,2,4,6,8};
    int ans=max_pivot_element(arr1,n);
    cout<<"the pivot element is: "<<ans<<endl;

    

    return 0;
}