#include <iostream>
 
using namespace std;
 
int main()
{
    string x,y;
    cin>>x>>y;
    for(size_t i=0;i<x.length();i++)
    {
        if(x[i]==y[i])
        {
            x[i]='0';
        }
        else{
            x[i]='1';
        }
 
    }
    cout<<x<<endl;
    return 0;
}
