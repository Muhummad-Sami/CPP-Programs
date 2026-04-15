#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)  // Outer loop for rows
    {
        for(int j = 5; j >= i; j--)  // Spaces before the stars
        {
            cout << " ";
        }

        for(int k = 1; k <= i; k++)  // Inner loop for stars
        {
            // Print '*' at the borders or at the first row
            if(k == 1 || k == i || i == 5)
            {
                cout << "* ";  // Print a star with a space
            }
            else
            {
                cout << "  ";  // Print a space for hollow interior
            }
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}

