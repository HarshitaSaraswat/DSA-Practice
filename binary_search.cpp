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
int main(){

    int arr[]={10,20,30,40,50,60,70,80};
    int n=8;
    int target=90;
    int ans_index=binary_search(arr,n,target);

    if(ans_index==-1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"the element is found at index : "<<ans_index<<endl;
    }


    return 0;
}