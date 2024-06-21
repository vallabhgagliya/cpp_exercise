#include<iostream>
using namespace std;

int main() {
    string list1[4] = {"M", "na", "i", "Ke"};
    string list2[4] = {"y ", "me ", "s ", "lly "};

    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            if (i == j) 
            {
                cout << list1[i] << list2[j] ;
            }
        }
    }

    return 0;
}
