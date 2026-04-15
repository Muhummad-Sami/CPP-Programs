#include<iostream>
using namespace std;
int main()
{
	int year,offset;
	
    cout<<"Enter the year in which the person born: ";
    cin>>year;
    cout<<endl;
    offset=year-1900;
    
    switch(offset%12)
    {
    	case 1 :
    		cout<<"rat"<<endl;
    		break;
    	case 2 :
    		cout<<"ox"<<endl;
    		break;
    	case 3 :
    		cout<<"tiger"<<endl;
    		break;
    	case 4 :
    		cout<<"rabbit"<<endl;
    		break;
    	case 5 :
    		cout<<"dragon"<<endl;
    		break;
    	case 6 :
    		cout<<"snake"<<endl;
    		break;
    	case 7 :
    		cout<<"horse"<<endl;
    		break;
    	case 8 :
    		cout<<"goat"<<endl;
    		break;
    	case 9 :
    		cout<<"monkey"<<endl;
    		break;
    	case 10 :
    		cout<<"rooster"<<endl;
    		break;
    	case 11 :
    		cout<<"dog"<<endl;
    		break;
    	case 12 :
    		cout<<"boar"<<endl;
    		break;
    default:
	cout<<"invalid number;";
		
	}
	
}
