#include <iostream>

using namespace std;

int main()
{
    int n,arr[100];
    double t,sum=0.0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sum=sum/n;
    printf("%.12lf\n",sum);

    return 0;
}
