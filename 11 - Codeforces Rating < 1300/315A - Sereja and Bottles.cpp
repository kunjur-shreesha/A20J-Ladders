#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a[100],b[100],c;
    cin>>n;c=n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            {
                if(a[i]==b[j] && i!=j)
                {
                    c--;break;
                }
            }
        cout<<c;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}

