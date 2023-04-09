
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n,k; cin >> n >> k;
    vector<ll > rm;
    vector<ll >::iterator it;
    ll s = 0;
    for(int i = 1; i <= n; i++)
    {
        ll x; cin >> x;
        rm.push_back(x);
    }
    //ll w = accumulate(rm.begin(),rm.end(),0);
    sort(rm.begin(),rm.end());
    if(k >= n) cout << 0 << '\n';
    //if(k == 0 ) cout << w << '\n';
    if(k < n)
    {
        for(int i = 0; i < (n - k) ; i++)
        {
            s += rm[i];
            
        }
        cout << s << '\n';
        
    }
}
    