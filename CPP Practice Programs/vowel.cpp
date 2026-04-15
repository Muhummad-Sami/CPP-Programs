#include<iostream>
using namespace std;
int main()
{
	char alphabet;
	cout<<"Enter Any Alphabet : ";
	cin>>alphabet;
	cout<<endl;
	
	switch(alphabet)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
        case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		cout<<alphabet<<" is vowel .";
		break;
		
		default:
		cout<<alphabet<<" is Consonent .";				
			
	}
}
