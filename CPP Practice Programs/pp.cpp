#include<iostream>
#include<fstream>
#include<time.h>
#include<string>
using namespace std;
void Bakery()
{//for write
	ofstream write;
	write.open("bill.txt");
	write<<"1)Egg            1-Dozen    300\t\n";
	write<<"2)Bread          1-piece    200\t\n";
	write<<"3)Milk           1-kg       250\t\n";
	write<<"4)Cake           1-pound    850\t\n";
	write<<"5)Sandwich       1-piece    80\t\n";
	write<<"6)Cold-drink     1-liter    220\t\n";
	write<<"7)Biscuits       1-kg       1100\t\n";
	write<<"8)Brownie        1-piece    450\t\n";
	write<<"9)Lays           1-piece    100\t\n";
	write<<"10)Donuts        1-piece    150\t\n";
	write.close();
//for read
	string st;
    ifstream read;
	read.open("bill.txt");
	while(!read.eof())
	{
	
    getline(read,st);
    
    	cout<<st<<endl;
		}
	read.close();
	
}
void date()
{
     time_t ct = time(0);
    string current = ctime(&ct);
    cout << "Date: " << current;	
  int n;
  cout<<"Invoice To : ";
  cin>>n;
  cout<<endl;
}
int main()
{
	string array[3]={"----------------------------------", " Items          Quantity    Price","----------------------------------"};
	for(int i=0; i<3; i++)
	{
		cout<<array[i]<<endl;
	}
	Bakery();
	cout<<"---------------------------------\n";
    cout<<endl;
    cout<<"          -------------\n";
    cout<<"           BAKED BLISS\n";
    cout<<"          -------------\n";
    
    cout<<endl;
	
	cout<<"Enter the Item No (use '0' for exist ) : \n";
	cout<<"Enter the quantity : \n";
	string array1[3]={"--------------------------------", " No| Items   Quantity  Price","--------------------------------"};
	for(int i=0; i<3; i++)
	{
		cout<<array1[i]<<endl;
	}
	
	int Egg=300,Bread=200,Milk=250,Cake=85,Sandwich=80,Colddrink=220,	
        Biscuits=1100,Brownie=450,Lays=100,Donuts=150;
    int choice,Totalbill=0,Itemscount=0;
	float quantity;
    
  do
  {
    
    cin>>choice;
   // cout<<"\t";
    switch(choice)
    {
    	case 1:
    		
    		cin>>quantity;
    	cout<<"     Egg          "<<quantity<<"    Rs."<<quantity*Egg;
    	Totalbill+=quantity*Egg;
    	Itemscount++;
    	break;
    	case 2:
    		cin>>quantity;
    	cout<<"     Bread        "<<quantity<<"    Rs."<<quantity*Bread;
    	Totalbill+=quantity*Bread;
    	Itemscount++;
    	break;
    	case 3:
    		cin>>quantity;
    	cout<<"     Milk         "<<quantity<<"    Rs."<<quantity*Milk;
    	Totalbill+=quantity*Milk;
    	Itemscount++;
    	break;
    	case 4:
    		cin>>quantity;
    	cout<<"     Cake         "<<quantity<<"    Rs."<<quantity*Cake;
    	Totalbill+=quantity*Cake;
    	Itemscount++;
    	break;
    	case 5:
    		cin>>quantity;
    	cout<<"     Sandwich     "<<quantity<<"    Rs."<<quantity*Sandwich;
    	Totalbill+=quantity*Sandwich;
    	Itemscount++;
    	break;
    	case 6:
    		cin>>quantity;
    	cout<<"     Colddrink    "<<quantity<<"    Rs."<<quantity*Colddrink;
    	Totalbill+=quantity*Colddrink;
    	Itemscount++;
    	break;
    	case 7:
    		cin>>quantity;
    	cout<<"     Biscuits     "<<quantity<<"    Rs."<<quantity*Biscuits;
    	Totalbill+=quantity*Biscuits;
    	Itemscount++;
    	break;
    	case 8:
    		cin>>quantity;
    	cout<<"     Brownie      "<<quantity<<"    Rs."<<quantity*Brownie;
    	Totalbill+=quantity*Brownie;
    	Itemscount++;
    	break;
    	case 9:
    		cin>>quantity;
    	cout<<"     Lays         "<<quantity<<"    Rs."<<quantity*Lays;
    	Totalbill+=quantity*Lays;
    	Itemscount++;
    	break;
    	case 10:
    		cin>>quantity;
    	cout<<"     Donuts       "<<quantity<<"    Rs."<<quantity*Donuts;
    	Totalbill+=quantity*Donuts;
    	Itemscount++;
    	break;
    	case 0:
        cout<<"----------------------\n";
        cout << "Exiting the program..." << endl;
        break;
        default:
         cout << "Invalid choice! Please select a valid product number." << endl;
	}cout<<endl;
   }while(choice!=0);
   
   	string array2[3]={"---------------------------------", "        Bill Summary        ","---------------------------------"};
	for(int i=0; i<3; i++)
	{
		cout<<array2[i]<<endl;
	}
   date();
   cout<<"Totalbill         = "<<Totalbill<<endl;
   cout<<"Total NO of Items = "<<Itemscount<<endl;
   
   //for discount
   int discount;
   if(Totalbill>1000 && Totalbill<2000)
   {
   	discount=Totalbill*0.05;
   	Totalbill=Totalbill-discount;
   	cout<<"Discount will be 5%          : "<<discount<<endl;
   	cout<<"After discount the Totalbill : "<<Totalbill;
   }
   else if(Totalbill>2000 && Totalbill<4000)
   {
   	discount=Totalbill*0.1;
   	Totalbill=Totalbill-discount;
   	cout<<"Discount will be 10%         : "<<discount<<endl;
   	cout<<"After discount the Totalbill : "<<Totalbill;
   }
  else if(Totalbill>4000 && Totalbill<6000)
   {
   	discount=Totalbill*0.15;
   	Totalbill=Totalbill-discount;
   	cout<<"Discount will be 15%         : "<<discount<<endl;
   	cout<<"After discount the Totalbill : "<<Totalbill;
   }
   else if(Totalbill>7000 && Totalbill<9000)
   {
   	discount=Totalbill*0.20;
   	Totalbill=Totalbill-discount;
   	cout<<"Discount will be 20%         : "<<discount<<endl;
   	cout<<"After discount the Totalbill : "<<Totalbill;
   }
   else
   cout<<"No discount";
   
	return 0;
	
}

