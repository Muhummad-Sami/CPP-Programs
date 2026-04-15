#include <iostream>
using namespace std;

int fact(int num,int facto=1) {
    if (num <= 1) {
        return 1;
    }
    return num * fact(num - 1);
}

int main() {
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    cout << "The factorial of " << num << " is " << fact(num) << endl;
    return 0;
}

