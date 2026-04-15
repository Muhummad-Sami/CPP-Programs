#include<iostream>
using namespace std;
int main()
{
	float eng,urdu,math,sum,per;
	
	for(int i=1; i<=3; i++)
	{
		
	  cout<<"Student "<<i<<endl<<endl;
	  
	cout<<"Enter The Number Of English = ";
	cin>>eng;
	cout<<endl;
	
	cout<<"Enter The Number Of Urdu = ";
	cin>>urdu;
	cout<<endl;
	
	cout<<"Enter The Number Of Math = ";
	cin>>math;
	cout<<endl;
	
	sum=eng+urdu+math;
	per=sum/300*100;
	
	cout<<"The Total Persentage Of The Student = "<<per<<endl<<endl;
	
}
	
	return 0;
}
