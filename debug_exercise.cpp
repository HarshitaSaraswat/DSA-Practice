// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if('a'<=c && c<= 'z'){
//         cout<<0;
//     }
// 	else if('A'<=c && c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }

/*
Pattern
1
23
345
4567
*/
// #include<iostream>
// using namespace std;


// int main(){
//     int n=8;
//     int i=1;
//     while(i<n){
//         int j = i,count = 0;
//         while(count<i){
//             cout<<j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
// 
/*
Pattern
N = 4
1
22
333
4444
*/
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<i+1;j++){
	        cout<<i;
        }
    cout<<endl;
    }
}