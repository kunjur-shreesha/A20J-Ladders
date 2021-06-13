#include <iostream>
 
using namespace std;
    int n,t;
    string s;
int main()
{
    cin>>n>>s;
    for(int i=1;i<n;i++)
    {
        if(s[i-1]==s[i])
            t++;
    }
    cout<<t<<endl;
    return 0;
}
