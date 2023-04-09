#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
using ll = long long;
int main()
{
    string s, s1 ; cin >> s;
    s1 = s;
    ll cnt = 0;
    sort(s1.begin(), s1.end());
    char c = s1[s1.size() - 1];
    for(ll i = 0; i < s.size(); i++)
    {
        if(c == s[i])
            cnt++;
    }
    for(ll i = 1; i <= cnt; i++)
    {
        cout << c;
    }
}