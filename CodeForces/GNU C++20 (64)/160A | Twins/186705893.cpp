#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n, z, s = 0, cnt = 0 ; cin >> n;
    vector<ll > rm(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> rm[i];
    }
    sort(rm.rbegin(), rm.rend());
    ll d = accumulate(rm.begin(), rm.end(), 0);
    z = (d / 2) + 1;
    for(ll i = 0 ; i < n; i++)
    {
        if(s < z)
        {
            cnt++;
            s += rm[i];
        }
        if(s >= z)
        {
            break;
        }
    }
    cout << cnt << '\n';
}