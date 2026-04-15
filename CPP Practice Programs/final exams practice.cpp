#include<iostream>
#include<cmath>
using namespace std;
int main()
{
//	int a,b,c,n;
//	cout<<"Enter the 3 digit number: ";
//	cin>>n;
//	
//	a=n%10;
//	n=n/10;
//	b=n%10;
//	n=n/10;
//	
//	c=(a*100)+(b*10)+n;
//	cout<<"The Reverse is : "<<c;
//	
//	int total,base,expo;
//	cout<<"Enter The Base: ";
//	cin>>base;
//	cout<<"Enter The Exponents: ";
//	cin>>expo;
//	total=pow(base,expo);
//	cout<<"power is : "<<total;
	
//	for(int i=-5;i<=0;i++)
//	{
//		cout<<i<<" ,";
//		
//	}
//	cout<<endl;
//	for(int i=-5;i<=0;i++)
//	{
//		if(i==-2)
//		{
//			break;
//		}
//		cout<<i<<" ,";
//	}
//	cout<<endl;
//	for(int i=-5;i<=0;i++)
//	{
//		if(i==-2)
//		{
//			 continue;
//		}
//		cout<<i<<" ,";
//	}

	int num,fact=1;
	cout<<"Enter The Number : ";
	cin>>num;
	for(int i=num;i>=1;i--)
	{
		fact *= i;
		
	}
	cout<<"The Factourial is : "<<fact;}
	

//	for(int l=1; l<=4; l++){
//	for(int p=1; p<=l; p++)
//		{
//		cout<<p;
//		}
//	cout<<endl;
//	}
	
//	int n,sum=0;
//	cout<<"Enter The Number : ";
//	cin>>n;
//	cout<<endl;
//	cout<<"Even Natural Number Up to "<<n<<" terms : ";
//	for(int i=1; i<=n; i++)
//	{
//	int evennum = 2*i;
//	cout<<evennum<<" ";
//	sum=sum+evennum;
//	}
//	cout<<endl<<endl;
//	cout<<"The Sum Of All The Even Number Is : "<<sum<<endl;
//	
//	#include<iostream>
//	using namespace std;
//	float circle(int ,float pi=3.14 );
//	main()
//	{
//	int radius;
//	float crm;
//	cout<<"Enter The Radius: ";
//	cin>>radius;
//	crm=circle(radius);
//	cout<<"The Circumference Of Circle Is = "<<crm<<endl;
//	return 0;
//	}
//	float circle(int Radius, float pi)
//	{
//	float crm;
//	crm=2*Radius*pi;
//	return crm;
//	}
//		

//	#include <iostream>
//	#include <cmath>
//	using namespace std;
//	
//	int main() {
////    int number;
////    cout << "Enter a number: ";
////    cin >> number;
////
////    int sqrtValue = sqrt(number);
////    if (sqrtValue * sqrtValue == number) {
////        cout << number << " is a perfect square." << endl;
////    } else {
////        cout << number << " is not a perfect square." << endl;
////    }
//
////	int size;
////	cout<<"Array Size: ";
////	cin>>size;
////	int array[size];
////	cout<<"Enter Elements: ";
////	for(int i=0;i<size;i++)
////	{
////		cin>>array[i];
////	}
////	cout<<"The Array Is : ";
////	for(int i=0;i<size;i++)
////	{
////		cout<<array[i]<<" ";
////	}
////	cout<<endl;
////	cout<<"The reverse Array Is : ";
////	for(int i=size-1;i>=0;i--)
////	{
////		cout<<array[i]<<" ";
////	}
//
//	int row, col;
//	cout << "Enter the size of rows: ";
//	cin >> row;
//	cout << "Enter the size of columns: ";
//	cin >> col;
//	int Array1[row][col], Array2[row][col], result[row][col];
//	cout << "Enter the numbers of the 1st matrix: " << endl;
//	for(int i = 0; i < row; i++) {
//	for(int j = 0; j < col; j++) {
//	cin >> Array1[i][j];
//	}
//	}
//	cout << "Enter the numbers of the 2nd matrix: " << endl;
//	for(int i = 0; i < row; i++) {
//	for(int j = 0; j < col; j++) {
//	cin >> Array2[i][j];
//	}
//	}
//	// Initialize the result matrix to 0
//	for(int i = 0; i < row; i++) {
//	for(int j = 0; j < col; j++) {
//	result[i][j] = 0;
//	}
//	}
//	// Multiply matrices
//	for(int i = 0; i < row; i++) {
//	for(int j = 0; j < col; j++) {
//	for(int k = 0; k < col; k++) {
//	result[i][j] += Array1[i][k] * Array2[k][j];
//	}
//	}
//	}
//	// Output the result
//	cout << "The product of the matrices is: " << endl;
//	for(int i = 0; i < row; i++) {
//	for(int j = 0; j < col; j++) {
//	cout << result[i][j] << "\t";
//	} 
//	cout << endl;
//	}
//
//    return 0;
//}
//

