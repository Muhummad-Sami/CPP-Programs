//#include <iostream>
//using namespace std;
//int fact(int num,int facto=1);//decalre function
//int main()
//{
//	
//    int num;
//    int facto;
//  	cout<<"Enter The Number: ";
//	cin>>num;
//	facto=fact(num);//call function
//	cout<<"The Factorial of "<< num <<" is = "<<facto<<endl;
//	return 0;
//	  
//}
//   int fact(int num,int facto) // function deifnation
//   {
//   
//	for(int i=1; i<=num; i++)
//	{
//	  facto*=i;	
//	}
//	return facto;
//   }

//Q7: Write the program using function that takes as input 
//the three numbers. The function returns true if the first 
//number to the power of the second number equals the third 
//number; otherwise, it returns false.

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//// Function prototype
//bool checkPower(int num1, int num2, int num3);
//
//int main() {
//    int num1, num2, num3;
//
//    cout << "Enter First Number: ";
//    cin >> num1;
//    cout << "Enter Second Number: ";
//    cin >> num2;
//    cout << "Enter Third Number: ";
//    cin >> num3;
//
//    // Call the checkPower function and store the result
//    bool result = checkPower(num1, num2, num3);
//
//    // Output the result
//    if (result) 
//	{
//        cout << num1 << " to the power of " << num2 << " equals " << num3 << endl;
//    } 
//	else 
//	{
//        cout << num1 << " to the power of " << num2 << " does not equal " << num3 << endl;
//    }
//
//    return 0;
//}
//
//// Function definition
//bool checkPower(int num1, int num2, int num3) 
//{
//    int result = pow(num1, num2);
//    return result == num3;
//}

//Q8: Write a C++ program that defines a function called 
//power() to calculate the power of a number. The function 
//takes a double value for n and an int value for p, and returns 
//the result as a double. The default value of p is 2. The 
//program should prompt the user to enter the values of n and 
//p, and then call the power() function to calculate the result.

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//double power(double n,int p);
//
//int main()
//{
//	double n;
//	int p=2;
//	cout<<"Enter The base Value : ";
//	cin>>n;
//	cout<<endl;
//	cout<<"The exponent value (p), the default value is 2."<<endl<<endl;
//
//	
//	double result = power(n, p); 
//	cout << p << " raised to the power of " << n << " is " << result << endl;
//	return 0;
//	
//}
//double power(double n,int p)
//{
//	return pow(n,p);
//}


//#include <iostream>
//using namespace std;
//
//int main() 
//{
//    int num, original, reversed = 0, digit;
//    cout << "Enter a number: ";
//    cin >> num;
//
//    original = num;  // Store the original number
//
//    // Reverse the number
//    while (num > 0) {
//        digit = num % 10;
//        reversed = reversed * 10 + digit;
//        num /= 10;
//    }
//
//    // Check if the original number is equal to the reversed number
//    if (original == reversed) {
//        cout << original << " is a palindrome number." << endl;
//    } else {
//        cout << original << " is not a palindrome number." << endl;
//    }
//
//    return 0;
//}

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    // Input a number
    cout << "Enter a number: ";
    cin >> num;

    // Calculate the sum of the proper divisors of num
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the number is perfect
    if (sum == num && num != 0) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}


























