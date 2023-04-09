#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    string s; cin >> s;
    char x = s[s.size()- 1];
    ll d = x - '0';
    if(d & 1)
    {
        cout << "1\n";
    }
    if(! (d & 1) )
    {
        cout << "0\n";
    }
}