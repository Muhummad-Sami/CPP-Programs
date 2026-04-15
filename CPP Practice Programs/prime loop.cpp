#include <iostream>
using namespace std;
int main() {
    int n;

    cout<<"Enter an integer: ";
    cin>> n;

    cout<<"Prime numbers from 1 to " << n << " are: ";

    for(int num=1;num<=n;num++) 
	{
       bool Prime=true;

        
        for(int i=2; i<=num/2; i++) 
		{
            if(num%i==0) 
			{
                Prime=false;
                break;  
            }
        }

        if(Prime) 
		{
            cout<<num<<" ";
        }
    }

    cout<<endl;
    return 0;
}




