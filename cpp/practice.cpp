#include<iostream>
using namespace std;
// int main(){
//     int l,b;
//     cout<<" Enter lenght and width respectivily"<<endl;
//     cin>>l>>b;
//     if(l==b)cout<<"Square"<<endl;
//     else cout<<"Rectangle"<<endl;
// }

// int main(){
//     int n1,n2;
//     cout<<" Enter number1 and number2 respectivily"<<endl;
//     cin>>n1>>n2;
//     if(n1>n2)cout<<"Greatest is : "<<n1<<endl;
//     else if(n1<n2)cout <<"Greatest is : "<<n2<<endl;
//     else cout<<"Equal number "<<endl;
// }

// int main(){
//     int quat,price;
//     cout<<" Enter quant purchased "<<endl;
//     cin>>quat;
//     price=quat*100;
//     if(quat>=1000)cout<<price-((0.1)*price)<<endl;
//     else cout<<price<<endl;
// }

// int main(){
//     double salry,yr;
//     cout<<" Enter salary and year of service respectivily"<<endl;
//     cin>>salry>>yr;
//     if(yr>5)cout<<"Your bonus is : "<<(0.05*salry)<<endl;
// }

// int main(){
//     double marks;
//     cout<<" Enter marks respectivily "<<endl;
//     cin>>marks;
//     if(marks>=80 && marks<=100)cout<<"A"<<endl;
//     else if(marks<=80 && marks>=60)cout<<"B"<<endl;
//     else if(marks<=60 && marks>=50)cout<<"C"<<endl;
//     else if(marks<=50 && marks>=45)cout<<"D"<<endl;
//     else if(marks<=45 && marks>=25)cout<<"E"<<endl;
//     else if(marks<=25 && marks>=0)cout<<"F"<<endl;
//     else cout<<" Invalid marks "<<endl;
// }

// int main(){
//     int a,b,c;
//     cout<<" Enter age respectivily "<<endl;
//     cin>>a>>b>>c;
//     cout<<endl;
//     if(a>=b && a>=c)cout<<"a is oldest"<<endl;
//     else if(b>=a&&b>=c)cout<<"b is oldest"<<endl;
//     else cout<<"c is oldest"<<endl;
//     if(a<=b && a<=c)cout<<"a is youngest"<<endl;
//     else if(b<=a&&b<=c)cout<<"b is youngest"<<endl;
//     else cout<<"c is youngest"<<endl;
// }    

// int main(){
//     double n;
//     cout<<" Enter the number "<<endl;
//     cin>>n;
//     if(n<0)cout<<-1*n<<endl;
//     else cout<<n<<endl;
// }

// int main(){
//     double classheld,claasattend,percent;
//     cout<<" Enter total class helds"<<endl;
//     cout<< " Enter total class attended"<<endl;
//     cin>>classheld>>claasattend;
//     percent=(claasattend/classheld)*100;
//     if(percent>=75)cout<<" Eligible "<<endl;
//     else cout<<" Topper "<<endl;
// }

// int main(){
//     double classheld,claasattend,percent;
//     char med;
//     cout<<" Enter total class helds"<<endl;
//     cout<< " Enter total class attended"<<endl;
//     cin>>classheld>>claasattend;
//     percent=(claasattend/classheld)*100;
//     if(percent>=75)cout<<" Eligible "<<endl;
//     else cout<<" Do you have medical cause "<<endl;
//     cin>>med;
//     if(med=='Y')cout<<" Eligible "<<endl;
//     else cout<<" topper "<<endl;
// }

// int main(){
//     int x=2,y=5,z=0;
//     cout<<(x==2)<<endl;
//     cout<<(x!=5)<<endl;
//     cout<<(x!=5&&y>=5)<<endl;
//     cout<<(z!=0||x==2)<<endl;
//     cout<<!(y<10)<<endl;
// }

// int main(){
//     char ch;
//     cout<<" Enter any alphabet "<<endl;
//     cin>>ch;
//     if(ch>='a'&&ch<='z')cout<<" Lowercase "<<endl;
//     else if(ch>='A'&&ch<='Z')cout<<" Uppercase "<<endl;
//     else cout<<" Invalid "<<endl;
// }

int main(){
    int year;
    cout<<"Enter Year"<<endl;
    cin>>year;
    if((year%4==0&&year%100==0)||(year%400==0))cout<<" Leap year "<<endl;
    else cout<<" Not Leap year "<<endl;
}