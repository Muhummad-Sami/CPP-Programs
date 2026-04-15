#include<iostream>
using namespace std;
int main()
{
	// left HALF PYARAMID	
	for(int i=0; i<=5; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout<<"*";		
		}
			cout<<endl;
	}
	
	cout<<endl;cout<<endl;
	
	// INVERTED left HALF PYARAMID
	for(int i=5; i>=0; i--)
	{
		for(int j=0; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;cout<<endl;
	
	// SQUARE PATTERN
	for(int  i=0; i<=5; i++)
	{
		for(int j=0; j<=5; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
		cout<<endl;cout<<endl;
	// right HALF PYRAMID
	
	for(int i=0; i<=5; i++)
	{
		for(int j=0; j<=5-i; j++)
		{
			cout<<" ";
		}
		for( int k=0; k<=i; k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
		cout<<endl;cout<<endl;
		// INVERTED RIGHT HALF PYRAMID
	
	for(int i=5; i>=0; i--)
	{
		for(int j=0; j<=5-i; j++)
		{
			cout<<" ";
		}
		for(int k=0; k<=i; k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;cout<<endl;	
	// fULL PYRAMID
	
	for(int i=6; i>=0; i--)
	{
		for(int j=0; j<=6-i; j++)
		{
			cout<<" ";
		}
		for( int k=0; k<=i*2-0; k++)
		{
			cout<<"*";
		}
	cout<<endl;			
	}
	
	cout<<endl;cout<<endl;
	
		for(int i=0; i<=6; i++)
	{
		for(int j=0; j<=6-i; j++)
		{
			cout<<" ";
		}
		for( int k=0; k<=i*2-0; k++)
		{
			cout<<"*";
		}
	cout<<endl;			
	}
	
	cout<<endl;cout<<endl;

  // Rhombus pattern
  
   for(int i=1; i<=5; i++) 
   {      
        for (int j=1; j<=5-i; j++) 
		{
            cout << " ";   
        }
        for (int j=1; j<=5; j++) 
		{
            cout << "*";   
        }

        cout << endl;   
    }
    cout<<endl;cout<<endl;

     for (int i=1; i<=5; i++) 
	{
       
        for (int j=1; j<=i; j++)
		{
            cout << " ";  
        }
        for (int j=1; j<=5; j++) 
		{
            cout << "*";  
        }

        cout << endl; 
    }
//   HOUR GLASS PATTERN 
    cout << endl;cout << endl;

     
    for (int i = 5; i >= 1; i--) 
	{
         
        for (int j = 1; j <= 5 - i; j++) 
		{
            cout << " ";  
        }   
        for (int k = 1; k <= 2 * i - 1; k++)
	    {
            cout << "*";   
        }

        cout << endl;  
    }

    for (int i = 2; i <= 5; i++) 
	{
         
        for (int j = 1; j <= 5 - i; j++) 
		{
            cout << " ";  
        }   
        for (int k = 1; k <= 2 * i - 1; k++)
	    {
            cout << "*";   
        }

        cout << endl;  
    }
    
    cout<<endl;cout<<endl;
    //  hOLLOW SQUARE PYRAMID
    
    for(int i=0; i<=5; i++)
    {
    	for(int j=0; j<=5; j++)
    	{
    		if(i==0 || i==5 || j==0 || j==5)
    		{
    			cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	cout<<endl;cout<<endl;
	// HOLLOW FULL PYRAMID
	
	for(int i=0; i<=5; i++)
	{
		for(int j=0; j<=5-i; j++)
		{
			cout<<" ";
		}
		for(int k=0; k<=2*i-0; k++)
		{
			 if(k==0 || k==2*i-0 || i==5)
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
	
	// hollow right triangle
	
		for(int i=0; i<=5; i++)
	{
		for(int j=0; j<=5-i; j++)
		{
			cout<<" ";
		}
		for(int k=0; k<=i; k++)
		{
			 if(k==0 || k==i || i==5)
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
		// hollow inverted right triangle
	
		for(int i=5; i>=0; i--)
	{
		for(int j=0; j<=5-i; j++)
		{
			cout<<" ";
		}
		for(int k=0; k<=i; k++)
		{
			 if(k==0 || k==i || i==5)
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
  // Hollow Inverted triangle
  
  for(int i=5; i>=0; i--)
	{
		for(int j=0; j<=5-i; j++)
		{
			cout<<" ";
		}
		for(int k=0; k<=2*i-0; k++)
		{
			 if(k==0 || k==2*i-0 || i==5)
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

	
	// hollow hour glass
	
	
	
	for(int i=0; i<=5; i++)
	{
		for(int j=0; j<=5-i; j++)
		{
			cout<<" ";
		}
		for(int k=0; k<=2*i-0; k++)
		{
			 if(k==0 || k==2*i-0 || i==5)
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
	cout<<endl;cout<<endl;
	
// Hollwo Triangle	
		
		for(int i=0; i<=5; i++)
	{
		for(int j=0; j<=5-i; j++)
		{
			cout<<" ";
		}
		for(int k=0; k<=i; k++)
		{
			 if(k==0 || k==i || k==5)
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

  
  for(int i=5; i>=0; i--)
	{
		for(int j=0; j<=5-i; j++)
		{
			cout<<" ";
		}
		for(int k=0; k<=i; k++)
		{
			 if(k==0 || k==i || k==5)
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
	
//	flyoid triangle

    	for(int i=1; i<=4; i++)
	{
		for(int j=5; j>=i; j--)
		{
			cout<<" ";
		}
		for(int k=1; k<=i; k++)
		{
			if(i==3 && k==2)
			{
				cout<<"2 ";
			}
			else if(i==4 && (k==2 || k==3))
			{
				cout<<"3 ";
			}
			else
			{
			cout<<"1 ";
		}
		}
		cout<<endl;
	}
	
	// pascal triangle
	int n=1;
	for(int i=1; i<=4; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<n<<" ";
			n=n+1;
		}
		cout<<endl;
	}
	
		// DiAMOND PATTERN 	
	int num;
	cout<<"Enter Number.";
	cin>>num;
	cout<<endl;
	
	for(int i=0; i<=num; i++)
	{
		for(int j=0; j<=num-i; j++)
		{
			cout<<" ";
		}
		for(int k=0; k<=i*2-0; k++)
		{
			cout<<"*";
		}
		cout<<endl;
    }
		
		for(int i=num; i>=0; i--)
	{
		
		for(int j=0; j<=num-i; j++)
		{
			cout<<" ";
		}
		for(int k=0; k<=i*2-0; k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
		cout<<endl;cout<<endl;

  


	

		
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
