#include<iostream>
#include<cctype>
using namespace std;
int main()
{
//  char ch;
//  cout<<"Enter A Character = ";
//  cin>>ch;
//  cout<<endl;
//  
//  if(islower(ch))
//  {
//  	cout<<ch<<" Is A Lowercase Latter  "<<endl;
//  	ch=toupper(ch);
//  	cout<<ch<<" Uppercase Latter is  "<<endl;
//  }
//  else if(isupper(ch))
//  {
//  	cout<<ch<<" Is A uppercase Latter  "<<endl;
//  	ch=tolower(ch);
//  	cout<<ch<< " Is A Lowercase latter  "<<endl;
//  	
//  }
//  else
//  {
//  	cout<<"INVALID INPUT ";
//  }

   char ch;
   cout<<"Enter The Character : ";
   cin>>ch;
   cout <<endl;
   
   if(islower(ch))
   {
   	cout<<ch<<" is a Lowercase Letter. ";
   	ch=toupper(ch);
   	cout<<endl;
   	cout<<ch<<" Is A uppercase latter.";
   }
   else if(isupper(ch))
   {
   	cout<<ch<<" Is a uppercase letter.";
   	ch=tolower(ch);
   	cout<<endl;
   	cout<<ch<<" is a lowercase letter.";
   }
   else
   { 
      cout<<"Invalid Letter.";
   }

}
