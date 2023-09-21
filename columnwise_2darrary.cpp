#include<iostream>
using namespace std;

int main(){
    int row=2;
    int col=3;
    int arr[2][3]={
        {1,2,3},
        {2,4,6}
    };
    
    for(int i=0;i<col;i++){
        int sum1=0;
        for(int j=0;j<row;j++){
            sum1+=arr[j][i];
        }
    cout<<sum1<<endl;
    }
}
