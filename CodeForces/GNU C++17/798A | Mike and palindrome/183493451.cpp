#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    string s; cin >> s;
    int d = s.size();
    int cnt = 0;
    if(! (d & 1) )
    {
        for(int i = 0; i < d / 2; i++)
    {
 
        if(s[i] != s[d - i -1])
            cnt++;
    }
    if(cnt == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
    }
    if(d & 1)
    {
        for(int i = 0; i < d / 2; i++)
    {
 
        if(s[i] != s[d - i -1])
            cnt++;
    }
    if(!cnt or cnt == 1)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
 
    }
}
    /*
    bcfcb
    yes hbe
    bcccb */