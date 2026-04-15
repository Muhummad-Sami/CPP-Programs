#include<iostream>
using namespace std;
int main()
{
  
   float eng,urdu,isl,phy,che,bio;
   
   cout<<"Enter The Number of English : ";
   cin>>eng;
   cout<<endl;
    cout<<"Enter The Number of Urdu : ";
   cin>>urdu;
   cout<<endl;
    cout<<"Enter The Number of Islamiyat : ";
   cin>>isl;
   cout<<endl;
    cout<<"Enter The Number of physics : ";
   cin>>phy;
   cout<<endl;
    cout<<"Enter The Number of Chemistry : ";
   cin>>che;
   cout<<endl;
    cout<<"Enter The Number of Biology : ";
   cin>>bio;
   cout<<endl;
   
   float sum=(eng+urdu+isl+phy+che+bio);
   float per=sum/600*100;
   cout<<"Total Persentage of All Subject is = "<<per<<"%"<<endl;
   
   
   if(per<60)
   {
   	cout<<"The Student Grade is f: "<<endl;
   	
   }
   else if(per>60  && per<=65)
   {
   	cout<<"The Student Grade is d . "<<endl;
   	
   }   
   else if(per>65 && per<=70)
   {
   	cout<<"The Student Grade is c . "<<endl;
   	
   }
   else if(per>70 && per<=80)
   {
   	cout<<"The Student Grade is b . "<<endl;
   	
   }
   else if(per>80 && per<=90)
   {
   	cout<<"The Student Grade is A . "<<endl;
   	
   }
   else if(per>90 && per<=100)
   {
   	cout<<"The Student Grade is A+ . "<<endl;
   	
   }
   else
   {
   	cout<<"The Student Grade Is A++ .";
   }
   return 0; 
}
