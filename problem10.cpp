#include <iostream>
using namespace std;
int main ()

{
    int i,rev=0;{
   cout<<"enter a integer numbers : ";
   cin>>i;
    while(i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
        cout<<"reverse integer num is : "<<rev<<endl;
    }
    return 0;
}