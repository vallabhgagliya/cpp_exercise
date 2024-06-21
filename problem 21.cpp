#include<iostream>
using namespace std;

int main() {
    string a[] = {"a", "b", "c", "d", "e", "f", "g", "k", "l", "m", "n"};
    int i;

        for (i = 10; i >= 6; i--) { 
            a[i + 1] = a[i];
        }

        a[7] = {"h"};
        a[8] = {"i"};
        a[9] = {"j"};

        cout << "New array: ";
        for (i = 0; i < 14; i++) {
            cout << a[i] << endl;
        }

    return 0;
}
