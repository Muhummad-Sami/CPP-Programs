#include<iostream>
using namespace std;
int main(){


    int l,m;
    
    cout<<"Enter the first integer : ";
    cin>>l;
    cout<<endl;
    
    cout<<"Enter the second integer : ";
    cin>>m;
    cout<<endl;
    
    
    cout<<"Before Swapping : "<<endl;
    cout<<"l = "<<l<<endl;
    cout<<"m = "<<m<<endl; 
	
//swap l and m without using 3rd variable
   
    l=l+m;
    m=l-m;
    l=l-m;
	
	cout<<"After Swapping : "<<endl;
    cout<<"l = "<<l<<endl;
    cout<<"m = "<<m<<endl; 
    return 0;
}	  
