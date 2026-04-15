//q--5

//#include <iostream>
//using namespace std;
//int main()
//{
//	int size;
//	cout<<"Enter The Size Of The Array: ";
//	cin>>size;
//	int array[size];
//	cout<<"Enter The Number Of Array : ";
//	for(int i=0; i<size;i++)
//	{
//		cin>>array[i];
//	}
//	cout<<"The Array Is : ";
//	for(int i=0; i<size;i++)
//	{
//	cout<<array[i]<<" ";
//	}
//	cout<<endl;
//	cout<<"The Reversed Array Is : ";
//	for(int i=size-1;i>=0;i--)
//	{
//	cout<<array[i]<<" ";
//	}
//	
//}

// q--6

//#include <iostream>
//using namespace std;
//int main()
//{
//	int row;
//	cout<<"Enter The Size Of Rows : ";
//	cin>>row;
//	int col;
//	cout<<"Enter The Size Of cols : ";
//	cin>>col;
//	int Array[row][col];
//	cout<<"Enter The Number Of Array: ";
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cin>>Array[i][j];
//		}
//	}
//	cout<<"The Number Of Array is : "<<endl;
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cout<<Array[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//	
//}

 //q--7
 
//#include <iostream>
//using namespace std;
//int main()
//{
//	int row;
//	cout<<"Enter The Size Of Rows : ";
//	cin>>row;
//	int col;
//	cout<<"Enter The Size Of cols : ";
//	cin>>col;
//	int Array[row][col];
//	int transpose[row][col];
//	cout<<"Enter The Number Of Array: ";
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cin>>Array[i][j];
//		}
//	}
//	cout<<"The Number Of Array is : "<<endl;
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cout<<Array[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//	
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			transpose[j][i]=Array[i][j];
//		}
//	}
//	cout<<"The Transpose Of Array is : "<<endl;
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//				cout<<transpose[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//	
//}

//q --8

//#include <iostream>
//using namespace std;
//int main()
//{
//	int row;
//	cout<<"Enter The Size Of Rows : ";
//	cin>>row;
//	int col;
//	cout<<"Enter The Size Of cols : ";
//	cin>>col;
//	int Array1[row][col];
//	int Array2[row][col];
//	int result[row][col];
//	cout<<"Enter The Number Of 1st Matrix: ";
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cin>>Array1[i][j];
//		}
//	}
//	cout<<"The Number Of 2nd Matrix: ";
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cin>>Array2[i][j];
//		}
//	}
//	 
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			result[i][j]=Array1[i][j]+Array2[i][j];
//		}
//	}
//	cout<<"The SUM Of The Matrix Is : "<<endl;
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//			cout<<result[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//	
//}

//q--9

//#include <iostream>
//using namespace std;
//int main() 
//{
//    int row, col;
//    cout << "Enter the size of rows: ";
//    cin >> row;
//    cout << "Enter the size of columns: ";
//    cin >> col;
//
//    int Array1[row][col], Array2[row][col], result[row][col];
//
//    cout << "Enter the numbers of the 1st matrix: " << endl;
//    for(int i = 0; i < row; i++) {
//        for(int j = 0; j < col; j++) {
//            cin >> Array1[i][j];
//        }
//    }
//
//    cout << "Enter the numbers of the 2nd matrix: " << endl;
//    for(int i = 0; i < row; i++) {
//        for(int j = 0; j < col; j++) {
//            cin >> Array2[i][j];
//        }
//    }
//
//    // Initialize the result matrix to 0
//    for(int i = 0; i < row; i++) {
//        for(int j = 0; j < col; j++) {
//            result[i][j] = 0;
//        }
//    }
//
//    // Multiply matrices
//    for(int i = 0; i < row; i++) {
//        for(int j = 0; j < col; j++) {
//            for(int k = 0; k < col; k++) {
//                result[i][j] += Array1[i][k] * Array2[k][j];
//            }
//        }
//    }
//
//    // Output the result
//    cout << "The product of the matrices is: " << endl;
//    for(int i = 0; i < row; i++) {
//        for(int j = 0; j < col; j++) {
//            cout << result[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

//q--10

#include <iostream>
#include<cmath>
using namespace std;
// Function to calculate the determinant of a matrix
    int determinant(int matrix[10][10], int n) 
{
    int det = 0;
    if (n == 1) 
	{
        return matrix[0][0];
    } 
	else if (n == 2) 
	{
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    } 
	else 
	{
        int submatrix[10][10];
        for (int x = 0; x < n; x++) {
            int subi = 0; // Submatrix's i value
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x)
                        continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det = det + (pow(-1, x) * matrix[0][x] * determinant(submatrix, n - 1));
        }
    }
    return det;
}

int main() {
    int row, col;
    cout << "Enter the size of rows: ";
    cin >> row;
    cout << "Enter the size of columns: ";
    cin >> col;


    // Ensure the matrix is square
    if (row != col) {
        cout << "Error: Matrix must be square to find the determinant." << endl;
        return -1;
    }

    int matrix[10][10];

    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    int det = determinant(matrix, row);
    cout << "The determinant of the matrix is: " << det << endl;

    return 0;
}








	


