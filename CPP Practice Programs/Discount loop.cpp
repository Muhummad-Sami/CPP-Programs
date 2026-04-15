#include<iostream>
using namespace std;
int main()
{

	float product,discount,total,dp;
	float price=400;
	
	for(int i=1; i<=5; i++)
	{
		
	cout<<"Coustomer "<<i<<endl<<endl;
	
	cout<<"Enter The Quantity Of The Product = ";
	cin>>product;
	cout<<endl;
	
	total=product*price;
	cout<<"The ToTal Price Of Product Without Discount = "<<total<<endl<<endl;

	
	if(product>0 &&  product<=12)
	{
		cout<<"No Discount Is Given.";
	}
	else if(product>=13 && product<=40)
	{
		discount=total*0.10;
		cout<<"10% Discount Is Given On This Quantity Of Product = "<<discount;
	}
	else if(product>=41 && product<=50)
	{
		discount=total*0.15;
		cout<<"15% Discount Is Given On This Quantity Of Product = "<<discount;
	}
	else if(product>=51 && product <=70)
	{
		discount=total*0.20;
		cout<<"20% Discount Is Given On This Quantity Of Product = "<<discount;
	}
	else
	{
		discount=total*0.40;
		cout<<"40% Discount Is Given On This Quantity Of Product = "<<discount;		
	}
	
	cout<<endl<<endl;
	
	dp=total-discount;
	cout<<"The Total Price Is With Discount = "<<dp<<endl<<endl;
	
	}
	return 0;
	
}
