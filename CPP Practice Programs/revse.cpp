#include<iostream>
using namespace std;
int main()
{
//   int a,b,d,n;
//   cout<<"Enter the Number : ";
//   cin>>n;
//   a=n%10;
//   n=n/10;
//   b=n%10;
//   n=n/10;
//   
//   d=(a*100)+(b*10)+n;
//   cout<<"The reverse number Will be : "<<d<<endl;

    int a,b,c,d,e,n;
    cout<<"Enter The Number: ";
    cin>>a;
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    a=a/10;
    n=a%10;
    a=a/10;
    
    e=(b*10000)+(c*1000)+(d*100)+(n*10)+a;
    cout<<"The Reverse Of The Number will be = "<<e;
    
    
    
   return 0;
   
}
