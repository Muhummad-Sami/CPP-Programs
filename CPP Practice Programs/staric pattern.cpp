#include<iostream>
using namespace std;
int main()
{
	// Square Pattern
	
	for(int i=0; i<=5; i++)
	{
		for(int j=0; j<=5;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
   
     //increment pattern
	
//	for(int i=0; i<=5; i++)
//	{
//		for(int j=0; j<=i; j++)
//		{
//			cout<<"*";
//		}
//		cout<<endl;
//	}

    // decrement pattern
  
//   for(int i=5; i>=0; i--)
//   {
//   	for(int j=0; j<=i; j++)
//  	{
//  		cout<<"*";
//	  }
//	  cout<<endl;
//   }

        // l Pattern
          
//    for(int i=0; i<=5; i++)
//    {
//    	cout<<"*"<<endl;
//    
//	}
//	for(int j=0; j<=5; j++)
//    	{
//    	 cout<<"* ";
//		}

      // box Pattern
      
//      for(int i=0; i<=5; i++)
//      {
//      	for( int j=0; j<=5; j++)
//      	{
//      		if(i==0 || i==5)
//      		{	cout<<"*"; }
//			 
//			else
//			{
//				if(j==0 || j==5)
//				{	cout<<"*";  }
//				
//				else
//				{  	cout<<" ";  }
//		
//			}  
//		}
//      		 cout<<endl;
//	  }

   // pyramid pattern
   
//   int r,c,s;
//   for(r=0; r<=5; r++)
//   {
//   	for(s=0; s<=5-r; s++)
//	   { cout<<" "; }
//	   
//	for(c=1; c<=r*2-1; c++)
//	   { cout<<"*";}
//	   
//	   cout<<endl;
//   }
//   
   //  Diamond pattern
   
//  int r,c,s;
//  // 1st pattern
//  
//   for(r=0; r<=5; r++)
//   {
//   	for(s=0; s<=5-r; s++)
//	   { cout<<" "; }
//	   
//	for(c=1; c<=r*2-1; c++)
//	   { cout<<"*";}
//	   
//	   cout<<endl;
//   }
//   // 2nd pattern
//   
//   for(r=4; r>=0; r--)
//   {
//   	for(s=0; s<=5-r; s++)
//	   { cout<<" "; }
//	   
//	for(c=1; c<=r*2-1; c++)
//	   { cout<<"*";}  
//	    
//	   cout<<endl;
//   }
//	  
 // inverted Triangle
//   cout<<endl;
//    for(int i=0; i<=5; i++)
//    {
//      for(int j=0; j<=5; j++)
//      {
//        if (j>=i)
//        {
//        	cout<<"*";
//		}
//		else
//		{
//			cout<<" ";
//		}
//
//	  }			
//		cout<<endl;
//   }

  // left inverted triangle 
//    for(int i=0; i<=5; i++)
//    {
//      for(int j=0; j<=5; j++)
//      {
//        if (j>=i)
//        {
//        	cout<<"*";
//		}
//		else
//		{
//			cout<<"";
//		}
//	  }
//	  	cout<<endl;
//	}	
//	 
//	// invertd counting 
//    for(int i=0; i<=5; i++)
//    {
//      for(int j=0; j<=5; j++)
//      {
//        if (j>=i)
//        {
//        	cout<<j;
//		}
//		else
//		{
//			cout<<" ";
//		}
//	  }
//	  	cout<<endl;
//	}
 
   // righr inverted triangle
   
   for(int i=1; i<=5; i++)
   {
   	for(int j=1; j<=5; j++)
   	{
   		if(j<=6-i)
   		{
   			cout<<"*";
		   }
		else
		 {
		 	cout<<" ";
		   }  
	  
	   }
	   cout<<endl;
   } 
  
//			









}
