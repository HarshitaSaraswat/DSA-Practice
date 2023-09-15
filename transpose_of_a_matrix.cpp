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
    //inbuilt function
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(arr[i][j],arr[j][i]) ;  
        }     
    }
    //user defined function
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;   
        }     
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }
       
}    