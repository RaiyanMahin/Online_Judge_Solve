#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll n, m; cin >> n >> m; ll a[n + 1][m + 1];
    ll mn = 1e18, s = 0;
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
            mn = min(mn, a[i][j]);
            
        }
    }
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            s += abs(a[i][j] - mn);
            
        }
    }
    cout << s;
    
    
    
    
    
    
    
    
    
    
    
    
    
    //https://atcoder.jp/contests/abc188/submissions/19336454
}