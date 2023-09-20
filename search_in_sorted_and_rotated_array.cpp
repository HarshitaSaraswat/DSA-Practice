#include <bits/stdc++.h>
using namespace std;
int pivot_search(int arr[], int n){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){
        if(start==end){
            return start;
        }
        else if(arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid-1]){
            return mid-1;
        }
        else if(start<arr[mid]){
            start=mid+1;
        }
        else if(start>arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int binary_search(int arr[], int start, int end,int target){
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        end=mid-1;
    }
    else if(arr[mid]<target){
        start=mid+1;
    }
    mid=(start+end)/2;

 }
}    

int search_element(int arr[], int n, int target){
    int pivot=pivot_search(arr,n);
    int ans=-1;
    if(target>=0 && target<pivot){
        ans=binary_search(arr,0,pivot,target);   
    }
    else{
        if(target>=0 && target<pivot){
        ans=binary_search(arr,pivot+1,n,target);  
    }
    return ans;


 }
}
    


int main(){
    int n=8;
    int arr[]={12,14,16,2,4,6,8,10};
    int target=14;
    int ans1=search_element(arr,n,target);
    cout<<"The target element index: "<<ans1<<endl;
    return 0;
}