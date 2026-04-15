#include<iostream>
using namespace std;
int main()
{
	float usd,british_pound,pound_to_frechfranc,pound_to_germandeutsehemark,pound_to_japaneseyen,amount;
	british_pound=1.487;
	pound_to_frechfranc=british_pound/0.172;
	pound_to_germandeutsehemark=british_pound/0.584;
	pound_to_japaneseyen=british_pound/0.00955;
	
	cout<<"Enter amount in pounds : ";
	cin>>amount;
	cout<<endl;
	
	cout<<"Converted Values:"<<endl;
	cout<<amount<<" pounds to USD is : "<<amount*british_pound<<endl;
	cout<<amount<<" pounds to German Deutsehemark is : "<<amount* pound_to_germandeutsehemark<<endl;
	cout<<amount<<" pounds to French Franc is : "<<amount* pound_to_frechfranc<<endl;
	cout<<amount<<" pounds to Japanese Yen is : "<<amount*pound_to_japaneseyen<<endl;
	return 0;

}
