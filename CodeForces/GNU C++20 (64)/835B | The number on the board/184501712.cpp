 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll k; cin >> k; ll cnt = 0, q = 0, i = 0;
    string s; cin >> s; ll d = s.size();
    sort(s.begin(), s.end());
    for(i = 0; s[i]; i++)
    {
        q += s[i] - '0';
    }
    if(q >= k)
    {
        cout << 0 << '\n';
 
    }
    if(q < k)
    {
        for(i = 0; s[i]; i++)
        {
            if(q >= k) break;
            cnt++;
            q += '9' - s[i];
 
        }
        cout << cnt << '\n';
 
    }
}