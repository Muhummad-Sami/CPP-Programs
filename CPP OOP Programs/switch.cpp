#include <stdio.h>
using namespace std;
int main()
{
    int userId;
    char cnfm;   
    
    printf("Enter User ID: ");
    scanf("%d", &userId);
    printf("The User ID is: %d\n", userId);

    printf("Enter 'y' for Yes and 'n' for No: ");
    scanf(" %c", &cnfm); 

   
    if (cnfm == 'y') 
	{
        printf("Thanks.\n");
    } 
	else if (cnfm == 'n') 
	{
        printf("Sorry.\n");
    } 
	else 
	{
        printf("Invalid Input.\n");
    }

	
//	int error;
//	cout<<"Enter The Error type: ";
//	cin>>error;
//	
//	switch(error)
//	{
//		case 0:
//			cout<<"No Error.";
//			break;
//		case 404:
//			cout<<" page found error.";
//			break;
//		default:
//			cout<<"Invalid Number.";
//	}
//		int divi=30;
//		int divs=10;
//		int quo=divi/divs;
//		cout<<"The Total Is : "<<quo;
//		
//	for(int i=0;i<=5;i++)
//	{
//		
//	for(int j=0;j<=i;j++)
//	{
//		cout<<"*";
//	}		
//		cout<<endl;		
//	}
//	
//	int a=10;
//	int b=20;
//	int temp;
//	cout<<"Before Swapping A= "<<a<<" B= "<<b<<endl;
//	temp=a;
//	a=b;
//	b=temp;
//	cout<<"After Swapping A= "<<a<<" B= "<<b;

	
}
