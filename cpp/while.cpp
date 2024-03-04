#include<iostream>
using namespace std;
// int main(){
//     // int i=2,n,sum=0;
//     // cin>>n;
//     // while(i<=n){
//     //     sum=sum+i;
//     //     i=i+2;
//     // }
//     int i=0,n,sum=0;
//     cin>>n;
//     while(i<=n){
//         if(i%2==0){
//             sum=sum+i;
//         }
//         i=i+1;
//     }
//     cout<<sum<<endl;
// }

// prime no
int main(){
    int i=2,n;
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"not prime"<<endl;
        }
        else cout <<" prime"<<endl;
        i=i+1;
    }
}