#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,9,4,5};
    int m=0;
    int n=6;
    for(int i=0;i<n;i++){
        if(arr[i]>m){
            m=arr[i];
        }
    }
    cout<<m;
}