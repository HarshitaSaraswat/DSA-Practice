#include<iostream>
using namespace std;

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
int main(){

    int arr[]={10,30,30,30,30,60,70,70,80};
    int n=9;
    int target=70;
    int ans_index=first_occurence(arr,n,target);

    if(ans_index==-1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"the element is found at index : "<<ans_index<<endl;
    }


    return 0;
}