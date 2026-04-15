#include<iostream>
using namespace std;
int main()
{   
   // Question 01

//	int num;
//	cout<<"Enter Any Number : ";
//	cin>>num;
//	cout<<endl;
//	
//	if(num>0)
//	{
//		cout<<num<<" Is A positive Number .";
//	}
//	
//	else if(num<0)
//	{
//		cout<<num<<" Is A Negative Number .";
//	}
//	
//	else
//	{
//		cout<<num<<" Is Neither Positive Nor Negative .";
//	}
//	return 0;

   // Question 02
   
//   int n1,n2,n3,n4,n5;
//   cout<<"Enter 1st Number : ";
//   cin>>n1;
//   cout<<endl;
//    cout<<"Enter 2nd Number : ";
//   cin>>n2;
//   cout<<endl;
//    cout<<"Enter 3rd Number : ";
//   cin>>n3;
//   cout<<endl;
//    cout<<"Enter 4th Number : ";
//   cin>>n4;
//   cout<<endl;
//    cout<<"Enter 5th Number : ";
//   cin>>n5;
//   cout<<endl; 
//   
//   if(n1>n2 && n1>n3 && n1>n4 && n1>n5 )
//   {
//   	cout<<n1<< " is a Greatest Number. ";
//	 }  
//   else if(n2>n1 && n2>n3 && n2>n4 && n2>n5)
//	{
//	cout<<n2<<" is a Greatest Number.";	
//	 } 
//   else if(n3>n1 && n3>n2 && n3>n4 && n3>n5)
//	{
//	cout<<n3<<" is a Greatest Number.";	
//	 } 
//   else if(n4>n1 && n4>n2 && n4>n3 && n4>n5)
//	{
//	cout<<n4<<" is a Greatest Number.";	
//	 }
//   else
//    {
//   	cout<<n5<<" is a Greatest number.";
//     }	     
//   

   // Question 03
   
//   int grade,salary,bonus,total;
//   cout<<"Enter Salary of The Employee : ";
//   cin>>salary;
//   cout<<endl;
//   
//   cout<<"Enter Grade Of The Employee : ";
//   cin>>grade;
//   cout<<endl;
//   
//   if(grade>=15)
//   {
//   	bonus=salary*0.5;
//   	total=salary+bonus;
//   	cout<<"Salary Of the Employee With 50% Bonus = ";
//   	cout<<total;
//   }
//   else
//   {
//   	bonus=salary*0.25;
//   	total=salary+bonus;
//   	cout<<"Salary Of the Employee With 25% Bonus = ";
//   	cout<<total;
//   	
//   }
//   
   // Question 04
   
//   char alpha;  
//   cout<<"Enter Any Alphabat : ";
//   cin>>alpha;
//   cout<<endl;
//   
//   if(islower(alpha))
//   {
//   	cout<<alpha<<" Is a Lowercase latter.";
//   	cout<<endl;
//   	alpha=toupper(alpha);
//   	cout<<alpha<<" Is a Uppercase Latter.";
//   }
//   else if(isupper(alpha))
//   {
//   	cout<<alpha<<" Is a Uppercase latter.";
//   	cout<<endl;
//   	alpha=tolower(alpha);
//   	cout<<alpha<<" Is  a Lowercase Latter.";
//	  } 
//	else
//	{
//	cout<<"Invalid latter.";
//    }  
// 

 //  Question 05
 
//   int salary,tax,total;
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
//   
   
   // Question 06
   
//   int score;
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
   
   // Question 07
   
//   double a,b,c;
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
//   if(a+b<=c || a+c<=b || b+c<a)
//   {
//   	cout<<"These Side Cannot foam a Triangle. ";
//	} 
//	else
//	{
//		if(a==b && b==a)
//		{
//			cout<<"This is Equilateral Triangle.";
//		}
//		else if(a==b || b==c ||a==c)
//		{
//			cout<<"This is Isosceles Triangle. ";
//		}
//		else
//		{ 
//		    cout<<"This Is Scalen Triangle.";
//	
//	
//	
	//Question 08
	
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
//}

    //Question 09
    
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

    // Question 10
    
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
					
		
		
		
		
		
		
		
		
		
		
	
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
	

