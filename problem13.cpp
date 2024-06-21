#include<iostream>
using namespace std;
 int main()
 {
    int i,n,
    term=0,
    sum=0;
   cout<<"enter a number of terms: ";
   cin>>n;
    for(i=1; i<=n; i++)
    {
        term=term*10+2;
        sum=sum+term;
    }
        cout<<"sum is :"<<sum<<endl;

   

    return 0;
 }