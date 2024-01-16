#include <bits/stdc++.h>
using namespace std;

int main(){
    int rows=10;
    int column=7;
    for(int row=0;row<rows;row++){
        for(int col=0;col<column;col++){
            if(row==0 || row==rows-1){
                cout<<"* ";
            }
            else{
                if(col==0 || col==column-1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }

    return 0;
}