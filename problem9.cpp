#include <iostream>
using namespace std;
int main () 
{
   // int i=50;
   for (int i=25; i<50; i++) 
        for (int j=2; j<i; j++)
        {
            if (i % j == 0) 
                break;
            else if (i == j+1)
                cout << i << "\n";

        }   
    return 0;
}