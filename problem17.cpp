#include<iostream>
using namespace std;

int main() {
    string list1[2] = {"hello", "take"};
    string list2[2] = {"dear ", "sir "};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << list1[i] << " " << list2[j] ;
        }
    }

    return 0;
}
