#include<iostream>
using namespace std;

int main(){
    int row=4;
    int column=6;
    int arr[4][6]={
    {1,2,3,4,5,6},
    {2,4,6,8,10,12},
    {3,6,9,12,15,18},
    {4,8,12,16,20,24}
    };

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<" ";
        }
          cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==24){
                cout<<i<<","<<j<<endl;
            }    
        }
    }

}