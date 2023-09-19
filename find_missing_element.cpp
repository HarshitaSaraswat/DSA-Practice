#include <iostream>
using namespace std;

int missing_element(int arr[],int n){
    int start =0;
    int end =n-1;
    int mid = (start+end)/2;
    int ans=-1;

    while(start<=end){
        int difference= arr[mid]-mid;

        if(difference==1){
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }
        mid= (start +end)/2;
    }
    if(ans+1==0)
        ans=n+1;
    return ans+1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=9;
    int ans_missing=missing_element(arr,n);
    cout<<"the missing element is: "<< ans_missing<< endl;

}