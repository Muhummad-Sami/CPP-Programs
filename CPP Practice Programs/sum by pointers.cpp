//#include <iostream>
//using namespace std;
//int main()
//{
//	//pointer To Pointer Adress
//	
//	int num1,num2,sum;
//	int *num=&num1;
//	int** n=&num;
//	int *nu=&num2;
//	int** u=&nu;
//	int *su=&sum;
//	int** s=&su;
//	
//	cout<<"Enter The First Number: ";
//	cin>>num1;
//	cout<<"Enter The second Number: ";
//	cin>>num2;
//	sum=*num+*nu;
//	cout<<endl;
//	cout<<"The Sum Is "<<sum<<endl<<endl;
//	
//	
//	
//	cout<<"The Adress Of Num1 Is: "<<num<<endl;
//	cout<<"The Adress Of Num2 Is: "<<nu<<endl;
//	cout<<"The Adress Of sum Is: "<<su<<endl<<endl;
//	
//	cout<<"The Value Of Num1 Is: "<<*num<<endl;
//	cout<<"The Value Of Num2 Is: "<<*nu<<endl;
//	cout<<"The Value Of sum Is: "<<*su<<endl<<endl;
//	
//	cout<<"The Adress Of n Is: "<<*n<<endl;
//	cout<<"The Adress Of u Is: "<<*u<<endl;
//	cout<<"The Adress Of s Is: "<<*s<<endl<<endl;
//	
//	cout<<"The Value Of n Is: "<<**n<<endl;
//	cout<<"The Value Of u Is: "<<**u<<endl;
//	cout<<"The Value Of s Is: "<<**s<<endl;
//}


//sum

//#include<iostream>
//using namespace std;
//void add(int* num1,int* num2,int* sum){
//	*sum=*num1+*num2;
//	cout<<"The Sum Is : "<<*sum<<endl;
//	cout<<"The Adress Of Num1 Is: "<<num1<<endl;
//	cout<<"The Adress Of Num2 Is: "<<num2<<endl;
//	cout<<"The Adress Of sum Is: "<<sum<<endl;
//	
//}
//int main()
//{
//	int num1,num2,sum;
//	cout<<"Enter The Value of Number 1: ";
//	cin>>num1;
//	cout<<"Enter The Value of Number 2: ";
//	cin>>num2;
//	add(&num1,&num2,&sum);
//}

// subtract

//#include<iostream>
//using namespace std;
//void subtract(int* num1,int* num2,int* sum){
//	*sum=*num1-*num2;
//	cout<<"The Subtraction Is : "<<*sum<<endl;
//	cout<<"The Adress Of Num1 Is: "<<num1<<endl;
//	cout<<"The Adress Of Num2 Is: "<<num2<<endl;
//	cout<<"The Adress Of sum Is: "<<sum<<endl;
//	
//}
//int main()
//{
//	int num1,num2,sum;
//	cout<<"Enter The Value of Number 1: ";
//	cin>>num1;
//	cout<<"Enter The Value of Number 2: ";
//	cin>>num2;
//	subtract(&num1,&num2,&sum);
//}

#include <iostream>
using namespace std;

void add(int (*num1)[10][10], int (*num2)[10][10], int (*sum)[10][10], int *r, int *c) {
    cout << "Enter the elements of the 1st matrix: " << endl;
    for (int i = 0; i < *r; i++) {
        for (int j = 0; j < *c; j++) {
            cin >> (*num1)[i][j];
        }
    }

    cout << "Enter the elements of the 2nd matrix: " << endl;
    for (int i = 0; i < *r; i++) {
        for (int j = 0; j < *c; j++) {
            cin >> (*num2)[i][j];
        }
    }

    for (int i = 0; i < *r; i++) {
        for (int j = 0; j < *c; j++) {
            (*sum)[i][j] = (*num1)[i][j] + (*num2)[i][j];
        }
    }

    cout << "The sum is: " << endl;
    for (int i = 0; i < *r; i++) {
        for (int j = 0; j < *c; j++) {
            cout << (*sum)[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int num1[10][10], num2[10][10], sum[10][10];
    int r, c;

    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    add(&num1, &num2, &sum, &r, &c);

    return 0;
}

//#include <iostream>
//using namespace std;
//int sum(int* num1,int* num2,int* add)
//{
//	*add=*num1+*num2;
//	cout<<"The Sum Is : "<<*add;
//}
//
//int main()
//{
//	int n,u,p;
//	cout<<"Enter The 1st Number: ";
//	cin>>n;
//	cout<<"Enter The 2nd Number: ";
//	cin>>u;
//	sum(&n,&u,&p);
//	
//	
//}


 


