#include<iostream>
using namespace std;

int main ()
{
    int num,totaldigits=0;
    {
        cout<<"enter a number :";
        cin>>num;
        {
            while(num>0)
        {
            totaldigits++;
            num = num/10;
        }
            {
                cout<<"totaldigits="<<totaldigits<<endl;
            }
        }
    }
    return 0;
}