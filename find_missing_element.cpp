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
    return ans+1;
}

int main(){
    int arr[]={1,2,3,4,6,7,8,9};
    int n=8;
    int ans_missing=missing_element(arr,n);
    cout<<"the missing element is: "<< ans_missing<< endl;

}