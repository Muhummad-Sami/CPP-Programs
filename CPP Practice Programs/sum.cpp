 #include <iostream>
using namespace std;

void add(int (*a)[3][3], int (*b)[3][3], int (*sum)[3][3]) {
    cout << "Enter The Numbers Of The 1st Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> (*a)[i][j];
        }
    }

    cout << "Enter The Numbers Of The 2nd Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> (*b)[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            (*sum)[i][j] = (*a)[i][j] + (*b)[i][j];
        }
    }

    cout << "Sum Of The Matrices Is:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << (*sum)[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int a[3][3], b[3][3], sum[3][3];
    add(&a, &b, &sum);
    return 0;
}

