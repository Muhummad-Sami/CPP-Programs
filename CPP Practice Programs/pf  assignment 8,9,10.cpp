// Q--1
//#include <iostream>
//using namespace std;
//int main()
//{
//	int size;
//	cout<<"Enter the size of the array : ";
//	cin>>size;
//	int array[size];
//	cout<<"Enter the Number of the array : ";
//	for(int i=0;i<size;i++)
//	{
//		cin>>array[i];
//	}
//	
//	for(int i=0;i<size;i++)
//	{
//		cout<<"Element "<<i+1<<" = "<<array[i]<<endl;
//	}
//	
//}

// q--2

//#include <iostream>
//using namespace std;
//int main()
//{
//	int size;
//	cout<<"Enter the size of the array : ";
//	cin>>size;
//	int array[size];
//	cout<<"Enter the Number of the array : ";
//	for(int i=0;i<size;i++)
//	{
//		cin>>array[i];
//	}
//	int i,sum=0;
//	for(i=0;i<size;i++)
//	{
//		sum=sum+array[i];
//	}
//	cout<<"The Sum of the array Numbers is : "<<sum;
//	
//}

//q--3

//#include<iostream>
//using namespace std;
//int main()
//{
//	int size;
//	cout<<"Enter The Size Of Array: ";
//	cin>>size;
//	int array[size];
//	cout<<"Enter The Number Of Array A : ";
//	for(int i=0;i<size;i++)
//	{
//		cin>>array[i];
//	}
//	int array1[size];
//	int i;
//	for(i=0;i<size;i++)
//	{
//		array1[i]=array[i];
//	}
//	cout<<"The Array B is : ";
//	for(i=0;i<size;i++)
//	{
//		cout<<array1[i]<<" ,";
//	}
//}

// q--4

#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the Size Of The Array: ";
    cin>>size;
    int array[size];
    cout<<"Enter The Numbers Of The Array: ";
    for (int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int x;
    cout<<"Enter The Element to search: ";
    cin>>x;
    bool found=false; // Flag to check if the element is found

    for(int i=0;i<size;i++)
    {
        if(array[i]==x)
        {
            cout<<"The Element is found at index: " <<i+1<<endl;
            found=true;
        }
    }

    if(!found) 
    {
        cout<<"The Element is not found!!"<<endl;
    }

    return 0;
}




