#include<iostream>
using namespace std;

int main(){
    int n=1;
    int factorial_finding=1;
    for(int i=1;i<=n;i++){
        factorial_finding=factorial_finding*i;   
    }
    cout<<factorial_finding<<endl;
}