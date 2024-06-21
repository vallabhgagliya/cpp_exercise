#include<iostream>
using namespace std;
 int main()
 {
    int n,i,ans;
    cout<<"enter a number from 1 to n(calculate cube) : ";
    cin>>n;

    {
        for(i=0; i<=n; i++)

        {
        ans=i*i*i;
            cout<<"cubes is : "<<ans<<"/n"<<endl;
        }
    }

    return 0;
 }