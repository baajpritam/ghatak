// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=i;
//         while(j<=n){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,count=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count;
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,count,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         count=i;
//         while(j<=i){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i + j - 1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i-j+1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch = 'A'+i-1;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch = 'A'+j-1;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     char count='A';
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch='A'+i+j-2;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char ch='A'+i-1;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     char ch='A';
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//         cout<<ch<<" ";
//         ch=ch+1;
//         j++;
//         }
//         cout<<endl;
//         i++;    
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char ch='A'+i+j-2;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char ch='A'+n-i+j-1;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         char ch='A'+i-1;
//         while(j<=n){
//             cout<<ch<<" ";
//             ch=ch+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int space=n-i;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<'*';
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int star=n-i+1;
//         while(star){
//             // int star=n-i;
//             cout<<'*'<<" ";
//             star=star-1;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int space=i-1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int star=n-i+1;
//         while(star){
//             cout<<'*';
//             star--;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int space=n-i;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j=1;
//         // int count=1;
//         while(j<=i){
//             cout<<j;
//             // count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int space=n-i+1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j=1;
//         int pat=i-1;
//         while(pat){
//             cout<<pat;
//             pat--;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int space = n-i;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j=1;
//         while (j<=i){
//             cout<<j;
//             j++;
//         }
//         int l=1;
//         int pat = i-1;
//         while(pat){
//             cout<<pat;
//             pat--;
//             l++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         int pat1=n-i+1;
//         while(pat1){
//             cout<<j;
//             pat1--;
//             j++;
//         }
//         int star=i-1;
//         while(star){
//             cout<<'*';
//             star--;
//         }
//         int star2=i-1;
//         while(star2){
//             cout<<'*';
//             star2--;
//         }
//         int pat2=n-i+1;
//         while(pat2){
//             cout<<pat2;
//             pat2--;
//         }
//         cout<<endl;
//         i++;
//     }
// }