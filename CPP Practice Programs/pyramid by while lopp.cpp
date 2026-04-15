#include<iostream>
using namespace std;

//void swap(int &a, int &b)
//     {
//       int temp = a; 
//	   a = b; 
//	   b = temp;
//     	
//	 }

//   void name()
//   {
//    cout<<"My Name Is Muhummad Sami Abid.";
//   }

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
	
	   

//// while loop
//      int i=5;
//      while(i>0)
//      {
//      	int j=0;
//      	while(j<5-i)
//      	{
//      		cout<<" ";
//      		j++;
//		}
//		int k=0;
//		while(k<(2*i-1))
//		{
//			cout<<"*";
//			k++;
//		}
//		cout<<endl;
//		i--;
//	  }
//	  
//// for loop	  
//        
//        for(int i=5; i>=0; i--)
//        {
//        	for(int j=0; j<5-i; j++)
//        	{
//        		cout<<" ";
//			}
//        	for(int k=0; k<=2*i-0; k++ )
//        	{
//        		cout<<"*";
//			}
//			cout<<endl;
//		}
//	


//   int i=5;
//   cout<<"Multiplication Table From 1 to 5 is :"<<endl;
//   
//   for( i=1; i<=5; i++ )
//   {
//   	
//   	for(int j=1; j<=5; j++ )
//   	{
//   		cout<<i*j<<"\t";
//	}
//	
//	cout<<endl;
//   }

//    int num1,num2;
//   cout<<"Enter Two Numbers : ";
//   cin>>num1>>num2;
//   
//   cout<<"Before Swapping Num1 : "<<num1<<" , Num2 : "<<num2<<endl;
//   
//   swap(num1,num2);
//   
//   cout<<"After Swapping Num1 : "<<num1<<" , Num2 : "<<num2<<endl;
//   
//   
     
//     name();
     
}

 float circle(int radius, float pi)
 {
 	float crm;
 	crm=2*radius*pi;
 	return crm;
 }
 
