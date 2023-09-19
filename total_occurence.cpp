#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int mid=(start+end/2);

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid]>target){
            end= mid-1;
        }
         mid=(start+end)/2;
    }
    return -1;
}
int first_occurence(int arr[],int n, int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid>target]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;

}
int last_occurence(int arr[],int n, int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid>target]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;

}
int total_occurence(int arr[], int n,int target){
    int first_occur= first_occurence(arr,n,target);
    int last_occur=last_occurence(arr,n,target);
    int total_occur= last_occur - first_occur + 1;
    return total_occur;
}
int main(){

    int arr[]={10,30,30,30,30,60,70,80};
    int n=8;
    int target=30;
    int ans=total_occurence(arr,n,target);
    cout<<"the total no. of occurence of the element are: "<<ans<<endl;

   
}