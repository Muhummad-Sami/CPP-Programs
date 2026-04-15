#include<iostream>
using namespace std;
int main()
{
	double price,totalprice,Discount,delivarycharges,Discountedprice,woutdp;
	int quantity;
	
	cout<<" Enter The Quantity of Order  :";
	cin>>quantity;
	cout<< endl;
	
	cout<<" Enter The Price of Your Order : $";
	cin>>price;
	cout<<endl;
	//Without Discount Price of All Items
	cout<<"Price Of all Items Without Discount : $";
	woutdp=price*quantity;
	cout<<woutdp<<endl;
	
	//calculate Discount 5% if quantity is >10 
	Discount=(quantity>10)?price*0.05*quantity:0;	
	
	//Apply Discount
	cout<<"Total Discount : $"<<Discount;
	cout<<endl;
	
	//Total price With Discount
	cout<<"Discounted Price Of Order : $";
	Discountedprice=woutdp-Discount;
	cout<<Discountedprice<<endl;

	
	//Delivary Charges
	cout<<"Total Delivary Charges : $";
	delivarycharges=10;
	cout<<delivarycharges;
	cout<<endl;
	
	//calculate Total price
	cout<<"The Total Price is : $";
	totalprice=(quantity*price)-Discount+delivarycharges;
	cout<<totalprice;
	cout<<endl;
	return 0;
	
	
}
