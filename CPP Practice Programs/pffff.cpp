 #include <iostream>
 using namespace std;
 
 int subtract(int x,int y);
 
 int main()
 {
 	int x1,x2,output;
 	cout<<"Enter Two Numbers: ";
 	cin>>x1>>x2;
 	output=subtract(x1,x2);
 	cout<<"Subtract Is = "<<output;
 	return 0;
 	
 }
 
 int subtract(int x,int y)
 {
 //	cout<<"Subtraction is : "<<(x1-x2);
 	return (x-y);
 }
 
