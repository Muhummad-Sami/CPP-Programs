#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter the Size Of Array: ";
    cin>>size;

    int array[size]; 
    int* ptr=array; 

    for(int i=0;i<size;i++) {
        cout<<"Element address of : "<<i<<" is : "<<(ptr + i)<<endl;
    }
	return 0;
	
}
//#include <iostream>
//using namespace std;
//
//int main() {
//    int myArray[] = {1, 2, 3, 4, 5};
//    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
//    cout << "The size of the array is: " << arraySize << std::endl;
//    return 0;
//}
//

