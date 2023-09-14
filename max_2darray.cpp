#include<iostream>
using namespace std;

int main(){
    int row=2;
    int col=3;
    int arr[2][3]={
        {1,9,3},
        {2,4,6}
    };
    int m=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>m){
                m=arr[i][j];
            }
        }
    }
    cout<<m;
}