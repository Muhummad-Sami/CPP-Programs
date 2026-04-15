#include <iostream>
using namespace std;
int main()
{
	int n,c;
	cout<<"Enter The Rows : ";
	cin>>n;
	cout<<"Enter The Column : ";
	cin>>c;
	 int rows[n][c];
	 int cols[n][c];
	 int sum[n][c];
	 
	 cout<<"Enter The elements Of Rows : "<<endl;
	 for(int i=0;i<n;i++)
	 {
	  for(int j=0; j<c;j++)
	  {
	  	cin>>rows[i][j];
	  }
	 
	 }
	  cout<<"The Elements Of RowsMatrix Is : ";
	 for(int  i=0;i<n;i++)
	 {
	   for(int j=0;j<c;j++)
	   {
	   cout<<rows[i][j]<<" ";   	  
	   }
     }
     cout<<endl;

	 
	cout<<"Enter The Elements Of cols :"<<endl;
	for(int  i=0;i<n;i++)
	 {
	   for(int j=0;j<c;j++)
	   {
	   	cin>>cols[i][j];
	   }
	
	 }
	 cout<<"The Elements Of ColsMatrix Is : ";
	 for(int  i=0;i<n;i++)
	 {
	   for(int j=0;j<c;j++)
	   {
	   cout<<cols[i][j]<<" ";   	  
	   }
	 }
	 cout<<endl;
	 
	 
	 for(int  i=0;i<n;i++)
	 {
	   for(int j=0;j<c;j++)
	   {
	   	sum[i][j]=rows[i][j]+cols[i][j];	  
	   }
	 
	 }
	 cout<<"The Sum of Row And Col is : "<<endl;
	 for(int  i=0;i<n;i++)
	 {
	   for(int j=0;j<c;j++)
	   {
	   	cout<<sum[i][j]<<"\t";	  
	   }
	   cout<<endl;
	 
	 }
	 
	 
	 
	 
	 
	 
}
