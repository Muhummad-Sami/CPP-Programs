#include <iostream>
using namespace std;

int main() {
  
//    int numbers[10];
//    int sum = 0;
//    float average;
//
//    // Input 10 numbers
//    cout << "Enter 10 numbers: " << endl;
//    for (int i = 0; i < 10; ++i) {
//        cin >> numbers[i];
//        sum += numbers[i];
//    }
//
//    // Calculate the average
//    cout<<"The Sum Of 10 Numbers Is : "<<sum<<endl;
//    average =  sum / 10;
//
//    // Output the average
//    cout << "The average of the 10 numbers is: " << average << endl;
//
//    return 0;
   
   int array[20],n,sum;
   cout<<"Enter the Size of array less then 20: ";
   cin>>n;
   cout<<"Enter The Number Of array: ";
   for(int i=0; i<n;i++)
   {
   	cin>>array[i];
   	sum +=array[i];
   }
   cout<<"The Sum Of Number of array: "<<sum;
}

