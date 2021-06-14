#include <iostream>

using namespace std;


int main()
{
    int n,x,maxi=0,mini=1000;
    int maxind=0,minind=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x;
        if(x>maxi)
        {
            maxind=i;
            maxi=x;
        }
        if (x<mini)
        {
            minind=i;
            mini=x;
        }

    }
   // cout<<"max : "<<maxind<<" min : "<<minind<<endl;
    if (maxind>minind)
    {
        cout<<(maxind-1)+(n-minind)-1;
    }
    else
    {
        cout<<(maxind-1)+(n-minind);
    }
    return 0;
}
