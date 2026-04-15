#include<iostream>
using namespace std;
int main()
{    
    int row,col,spa;
    // loop for row
	for(row=1; row<=5; row++)
	{
	
	//loop for space
	for(spa=1; spa<=5-row; spa++){
		cout<<" ";
	}	
	// loop for star
	for(col=1; col<=row*2-1; col++){
		cout<<"*";
	}
		
	cout<<endl;	
	}
	
    // 2nd pattern loop for row
    
   	for(row=4; row>=1; row--)
   	
	{
   	// loop for space
	
	for(spa=1; spa<=5-row; spa++)
	{
	cout<<" ";
	}
	// loops for star
	for(col=1; col<=2*row-1; col++)
	{
	cout<<"*";
	}
		
	cout<<endl;
	
      }
}
