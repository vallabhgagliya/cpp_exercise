#include<iostream>
using namespace std;

int main()
{
    int i,j,k,l;
    
    for(i=1; i<=5; i++)
    {
    for (j=1; j<=i; j++)
    {
    cout << "* ";
    } 
    cout <<"\n";  
    }
    for(k=4; k>=1; --k)
    {
    for (l=k; l>=1; --l)
    {
    cout << "* ";
    } 
    cout <<"\n";  
    }
 return 0;
}