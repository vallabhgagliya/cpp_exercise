#include<iostream>
using namespace std;

int  main()
{
    int i,ans,myNum[7] = {1 , 2 , 3 , 4 , 5 , 6 , 7 };

    {
        for(i=1; i<=7; i++)
        {
            ans=i*i;
            {
                cout<<ans<<" ";
            }
        }
    }
    
    return 0;
}