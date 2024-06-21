#include <iostream>
using namespace std;

int main()
{
    int i,numbers[] = {10, 20, 30, 40, 50};

    {
        for(i=4; i>=0; i--)
        {
            cout<<numbers[i]<<"\n"<<endl;
        }
    }

    
    return 0;
}
