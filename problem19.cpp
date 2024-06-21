#include <iostream>
#include <string>
using namespace std;

int main() {

    string list1[] = {"Mike", "", "Emma", "Kelly", "", "Brad"};
    int n = sizeof(list1) / sizeof(list1[0]); 
    
    int j = 0;
    for (int i=0; i<n; i++) {
        if (!list1[i].empty()) {
            list1[j++] = list1[i];
        }
    }
    
    for (int i = 0; i < j; ++i) {
        cout << list1[i] << endl;
    }

    return 0;
}
