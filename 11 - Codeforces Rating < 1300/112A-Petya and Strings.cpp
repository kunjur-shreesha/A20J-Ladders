#include <bits/stdc++.h>
using namespace std;
void solve(){
  string a,b;
  cin>>a>>b;
  transform(a.begin(), a.end(), a.begin(), ::toupper);
  transform(b.begin(), b.end(), b.begin(), ::toupper);
  if(a==b)
    cout<<'0';
  else if(a>b)
    cout<<'1';
  else
    cout<<"-1";
  }
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--){
     solve();
   }
     return 0;
   }
