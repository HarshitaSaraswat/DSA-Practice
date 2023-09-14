#include<iostream>
using namespace std;

int main(){
    int row=2;
    int col=3;
    int arr[2][3]={
        {8,9,3},
        {2,1,6}
    };
    int m=arr[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(m>arr[i][j]){
                m=arr[i][j];
            }
        }
    }
    cout<<m;
}