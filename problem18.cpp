#include<iostream>
using namespace std;

int main() {
    int myNum1[4] = {10 , 20 , 30 , 40 };
    int myNum2[4] = {100 , 200 , 300 , 400 };

    for (int i = 0; i < 4; i++) {
        {
            cout << myNum1[i] << " " << myNum2[3-i] << endl;
        }
    }

    return 0;
}
