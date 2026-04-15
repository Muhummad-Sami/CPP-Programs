#include<iostream>
using namespace std;
int main()
{
//	  int salary,tax,total;
//   cout<<"Enter The Salary of Employee : ";
//   cin>>salary;
//   cout<<endl;
//   
//   if(salary<7500)
//   { 
//     cout<<"No Tax Will be Deducte According to Salary.";
//   }
//   else if(salary>7500 && salary<15000)
//   {
//   	tax=salary*0.05;
//   	cout<<"Tax Deduction According to Salary = "<<tax<<endl;
//   	total=salary-tax;
//   	cout<<"Salary With 5% Tax Deduction = "<<total; 	
//    }
//    
//	else if(salary>15000 && salary<25000)
//   {
//   	tax=salary*0.12;
//   	cout<<"Tax Deduction According to Salary = "<<tax<<endl;
//   	total=salary-tax;
//   	cout<<"Salary With 12% Tax Deduction = "<<total; 	
//    }   
//    
//	else if(salary>25000 && salary<50000)
//   {
//   	tax=salary*0.18;
//   	cout<<"Tax Deduction According to Salary = "<<tax<<endl;
//   	total=salary-tax;
//   	cout<<"Salary With 18% Tax Deduction = "<<total; 	
//    }     
//	
//	else if(salary>50000 && salary<150000)
//   {
//   	tax=salary*0.24;
//   	cout<<"Tax Deduction According to Salary = "<<tax<<endl;
//   	total=salary-tax;
//   	cout<<"Salary With 24% Tax Deduction = "<<total; 	
//    }     
//    
//    else
//   {
//   	tax=salary*0.27;
//   	cout<<"Tax Deduction According to Salary = "<<tax<<endl;
//   	total=salary-tax;
//   	cout<<"Salary With 27% Tax Deduction = "<<total; 	
//    }    
     
//        int score;
//   cout<<"Enter The Persentage Of Student = ";
//   cin>>score;
//   cout<<endl;
//   
//   if(score<60)
//   {
//   	cout<<"Your grade is 'F'."<<endl;
//   	cout<<"Try Next Time.";
//   }
//   else if(score<70 && score>60)
//   {
//   	cout<<"Your Grade is 'D'."<<endl;
//	cout<<"You Are Pass.";    
//   }
//   else if(score<80 && score>70)
//   {
//   	cout<<"Your Grade Is 'c'."<<endl;
//   	cout<<"Better Marks.";  	
//   }
//    else if(score<90 && score>80)
//   {
//   	cout<<"Your Grade Is 'b'."<<endl;
//   	cout<<"Good Marks.";  	
//   }  
//    else
//   {
//   	cout<<"Your Grade Is 'A'."<<endl;
//   	cout<<"Excellent.";  	
//   }  
//   
//       double a,b,c;
//   cout<<"Enter The One Side Of Triangle: ";
//   cin>>a;
//   cout<<endl;
//   cout<<"Enter The Second Side Of Triangle: ";
//   cin>>b;
//   cout<<endl;
//   cout<<"Enter The One Third Of Triangle: ";
//   cin>>c;
//   cout<<endl;  
//   
//   if(a+b<=c || a+c<=b || b+c<=a)
//   {
//   	cout<<"These Side Cannot foam a Triangle. ";
//	} 
//	else
//	{
//		if(a==b && b==a)
//		{
//			cout<<"This is Equilateral Triangle.";
//		}
//		else if(a==b || b==c || a==c)
//		{
//			cout<<"This is Isosceles Triangle. ";
//		}
//		else
//		{ 
//		    cout<<"This Is Scalen Triangle.";
//			}
//		}

//	int hour;
//	cout<<"Enter Hour (In 24 format) = ";
//	cin>>hour;
//	cout<<endl;
//	
//	if(hour<0 || hour>24)
//	{
//		cout<<"invalid Hour ";
//		}
//	else
//	{
//	  if(hour>=5 && hour<=12)
//	  {
//	  	cout<<"Good Morning!";
//	  }
//	  else if(hour>=12 && hour<=17) 
//	  {
//	  	cout<<"Good Afternoon!";
//	   }
//	  else if(hour>=17 && hour<=21)
//	  {
//	  	cout<<"Good Evening!";
//		} 
//	  else
//	  { 
//	    cout<<"Good Night!";
//		   }
//	return 0;	   	 
//}
   
   
//    int age,price;
//    cout<<"Enter The Age of The Person = ";
//    cin>>age;
//    cout<<endl;
//    
//    if(age<0)
//    {
//    	cout<<"Invalid Age.";
//	}
//	else
//	{
//		if(age>=0 && age<=5)
//		{
//			cout<<"Your ticket For Movie Is Free.";
//		}
//		else if(age>=6 && age<=12)
//		{
//			cout<<"Your Ticket Price For Movie Will be = $10.";
//		}
//		else if(age>=13 && age<=59)
//		{
//			cout<<"Your Ticket price For Movie Will be = $15.";
//		}
//		else
//		{
//			cout<<"Your Ticket Price For Movie Will be = $12.";
//		}
//	}
//	
   
       
    int year;
    cout<<"Enter the Year : ";
    cin>>year;
    cout<<endl;
    
    if(year%4==0 || year%400==0)
	{
		cout<<year<<" Is a Leap Year.";
	}
	else
	{
		cout<<year<<" Is a not leap year.";
	}
		
		

}
