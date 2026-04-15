#include <iostream>
using namespace std;
int main()
{  
//    int score;
//
//	cout<<"Enter The Persentage Of Student : ";
//	cin>>score;
//	cout<<endl;
//	
//	while(score<=100)
//	{
//		if(score>=90 && score<=100)
//		{
//			cout<< "You Got A Grade.";
//			break;
//		}
//		else if(score<90 && score>=80)
//		{ 
//		    cout<<" You Got b Grade.";
//		    break;
//		}
//        else if(score<80 && score>=70)
//		{ 
//		    cout<<" You Got b Grade.";
//		    break;
//		}
//		else if(score<70 && score>=60)
//		{ 
//		    cout<<" You Got c Grade.";
//		    break;
//		}		
//		else
//		{ 
//		    cout<<" You Got f Grade.";
//		    break;
//		}	
//		
//	}
//	return 0;
//	

    char ch;
    int num1, num2, total;

    do {
        cout << "Press + For Addition" << endl;
        cout << "Press - For Subtraction" << endl;
        cout << "Press * For Multiplication" << endl;
        cout << "Press / For Division" << endl;
        cout << "Press q to Quit" << endl;
        cout << endl;

        cout << "Enter Your Choice: ";
        cin >> ch;
        cout << endl;

        switch(ch) {
            case '+':
                cout << "Enter 1st Number: ";
                cin >> num1;
                cout << endl;

                cout << "Enter 2nd Number: ";
                cin >> num2;
                cout << endl;

                total = num1 + num2;
                cout << "Total is: " << total << endl;
                break;

            case '-':
                cout << "Enter 1st Number: ";
                cin >> num1;
                cout << endl;

                cout << "Enter 2nd Number: ";
                cin >> num2;
                cout << endl;

                total = num1 - num2;
                cout << "Total is: " << total << endl;
                break;

            case '*':
                cout << "Enter 1st Number: ";
                cin >> num1;
                cout << endl;

                cout << "Enter 2nd Number: ";
                cin >> num2;
                cout << endl;

                total = num1 * num2;
                cout << "Total is: " << total << endl;
                break;

            case '/':
                cout << "Enter 1st Number: ";
                cin >> num1;
                cout << endl;

                cout << "Enter 2nd Number: ";
                cin >> num2;
                cout << endl;

                if (num2 != 0) {
                    total = num1 / num2;
                    cout << "Total is: " << total << endl;
                } else {
                    cout << "Error! Division by zero." << endl;
                }
                break;

            case 'q':
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a valid operation." << endl;
        }
        cout << endl;
    } while (ch != 'q'); // Exit loop when 'q' is pressed

    return 0;


   
   
   
   
   
   
   
   
   
   
   
   
}
