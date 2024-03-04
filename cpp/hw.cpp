#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<" Enter Character "<<endl;
    cin>>ch;
    if(ch>='A'&&ch<='Z')cout<<" UPPERCASE"<< endl; 
    else if(ch>='a'&&ch<='z')cout<<"LOWERCASE"<<endl;
    else if( ch>='0'&&ch<='9')cout<<"NUMERICAL"<<endl;
}