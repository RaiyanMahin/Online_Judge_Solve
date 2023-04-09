#include <bits/stdc++.h>
using ll = double;
using namespace std;
int main()
{
    ll n,k; cin >> n >> k;
    vector < ll > rm(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> rm[i];
    }
    ll d = accumulate(rm.begin(),rm.end(),0);
    ll cnt = 0;
    double x = d / (4 * k);
    for(ll i = 0; i < n; i++)
    {
        if(rm[i] >= x)
        {
            cnt++;
        }
    }
    //cout << cnt << '\n';
    if(cnt >= k)
        cout << "Yes\n";
    if(cnt < k)
        cout << "No\n";
}
