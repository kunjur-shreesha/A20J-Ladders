#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='-' && s[i+1]=='-')
           {
            cout<<'2';
            i++;
           }
           else if(s[i]=='-' && s[i+1]=='.')
           {
            cout<<'1';
            i++;
           }
           else
           {
            cout<<'0';
           }
    }
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}
