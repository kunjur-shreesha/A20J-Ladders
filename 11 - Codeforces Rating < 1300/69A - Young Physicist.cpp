#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int x,y,z,xs=0,ys=0,zs=0,p=0;
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t;
	cin>>t;
	while(t--){
		cin>>x>>y>>z;
       xs+=x;
       ys+=y;
       zs+=z;}
    if (xs==0 && ys==0 && zs==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
	return 0;}
