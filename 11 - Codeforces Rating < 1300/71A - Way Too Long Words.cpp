#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    long int t;
    cin>>s;
    t=s.length();
    if (t>10)
    {
        cout<<s[0]<<t-2<<s[t-1]<<endl;
    }
    else
        cout<<s<<endl;;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;}

