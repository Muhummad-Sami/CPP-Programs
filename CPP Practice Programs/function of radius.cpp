#include<iostream>
using namespace std;

float circle(int Radius,float pi=3.14 );

main()
{ 
    int radius;
    float crm;
    
    cout<<"Enter The Radius: ";
    cin>>radius;
    
    crm=circle(radius);
    
    cout<<"The Circumference Of Circle Is = "<<crm<<endl;
    
    return 0;
}

 float circle(int radius, float pi)
 {
 	float crm;
 	crm=2*radius*pi;
 	return crm;
 }
     
	
