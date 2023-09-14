#include<iostream>
using namespace std;

int main(){
    int row=3;
    int col=3;
    int arr[3][3]={
        {1,2,3},
        {5,4,6},
        {10,8,9}
    };
    int sum=0;
    for(int i=0;i<row;i++){
        sum+=arr[i][i];
    }
    cout<<sum<<endl;

    int sum1=0;
    int n=3;
   
    for(int i=0;i<row;i++){
        sum1+=arr[i][n-i-1];
        }   
    
    cout<<sum1<<endl;
    int ans=abs(sum1-sum);
    cout<<ans;

    //abs=absolute=mod;

}