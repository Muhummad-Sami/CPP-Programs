#include <iostream>
using namespace std;
int modifyValue(int &x)
{
	x = 20;
	cout<<x;
	cout<<endl;
	 int* ptr=&x;
	 cout<<ptr;
	  cout<<endl;
}
//int modifyValue(int x)
//{
//	 x = 20;
//	 cout<<x;
//	 cout<<endl;
//	 int* ptr=&x;
//	 cout<<ptr;
//	  cout<<endl;
//}
int main()
{
//	// Increment or decrement
//	int a=5;
//	int* value;
//	value = &a;
//	
//	cout<<value<<endl;
//	value++;
//	cout<<value<<endl;
//	value--;
//	cout<<value<<endl;
//	
//	// Adress or values
//	
//	int b=10;
//	int* ptr=&b;
//	int** ptr1=&ptr;
	
	
//	cout<<ptr<<endl;
//	cout<<*ptr<<endl;
//	cout<<*ptr1<<endl;
//	cout<<**ptr1<<endl;	   
//  // array values by pointers
//    
//    int arr[]={1,2,3,4,5};
//    
//  cout<<*arr<<endl;
//	cout<<*(arr+1)<<endl;
//	cout<<*(arr+2)<<endl;
//	cout<<*(arr+3)<<endl;
//	
//	// operators in pointers
//	
//	int ptr=20;
//	int* ptr1=&ptr;
//	
//	cout<<ptr<<endl;
//	cout<<ptr1<<endl;
//	
//	cout<<(ptr==ptr1)<<endl;
//	cout<<(ptr!=ptr1)<<endl;
//	cout<<(ptr>ptr1)<<endl;
//	cout<<(ptr<ptr1)<<endl;
//	
//	//pass by value
	 
//	int a = 10;
//	modifyValue(a);  
//	cout << "The value of a is: " <<a<< endl; 
//	 
//	//pass by reference
//	
	int a = 10; 
	modifyValue(a) ;
	cout << "The value of a is: " <<&a<< endl; 
	cout << "The value of a is: " <<a<< endl;
//	 
	
//	int array[] = {1, 2, 4, 6, 3, 5}; // Declare and initialize array 
//	int* ptr = array; // Pointer to the first element of the array 
//	cout << *(ptr + 1) << endl; // Output the second element of the array 
//	cout << *(ptr + 4) << endl; // Output the fifth element of the array 
//	cout << *(ptr + 3) << endl; // Output the fourth element of the array return 0;
//	
//	
	

	
}
