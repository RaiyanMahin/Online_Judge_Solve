#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n,m; cin >> n >> m; vector<ll >rm(n);
        for(ll i = 0 ; i < n ; i++)
        {
            cin >> rm[i];
        }
        ll d = accumulate(rm.begin(),rm.end(),0);
        if(d > m)
        {
            cout << m << '\n';
        }
        if(d <= m)
        {
            cout << d << '\n';
        }
        rm.clear();
    }
}