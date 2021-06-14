#include <iostream>

using namespace std;

int main()
{
   long long int n,k,odd,even;
   cin>>n>>k;
   odd=(n+1)/2;even=n/2;
   if (k<=odd)
   {
       cout<<k*2-1<<endl;
   }
   else
   {
       cout<<(k-odd)*2<<endl;
   }
    return 0;
}
