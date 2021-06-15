#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;string s;
    cin>>n>>x;
    cin>>s;
    for (int j=0;j<x;j++){
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B' && s[i+1]=='G')
        {
            s[i]='G';
            s[i+1]='B';
            i++;
        }
    }}
    cout<<s<<endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;

	while(t--)
		solve();
	return 0;}
