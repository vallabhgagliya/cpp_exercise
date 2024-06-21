#include<iostream>
using namespace std;

int main() {
    int a[20] = {10, 20, 300, 400, 5000, 6000, 500, 30, 40};
    int i;

        for (i = 8; i >= 6; i--) {
            a[i + 1] = a[i];
        }

        a[6] = 7000;

        cout << "New array: ";
        for (i = 0; i < 10; i++) {
            cout << a[i] <<" ";
        }

    return 0;
}
