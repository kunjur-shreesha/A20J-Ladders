#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    char s[1001];int u=0,l=0;
    cin>>s;
    for(int i=0;i<strlen(s);i++)
    {
        if(isupper(s[i]))
            u++;
        else if(islower(s[i]))
            l++;
    }
    if((u==l)||(u<l))
        for(int x=0;x<strlen(s);x++)
            putchar(tolower(s[x]));
    else if(u>l)
        for(int x=0;x<strlen(s);x++)
            putchar(toupper(s[x]));
	return 0;}
