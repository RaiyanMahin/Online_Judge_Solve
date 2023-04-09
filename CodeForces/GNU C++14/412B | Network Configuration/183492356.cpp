#include<bits/stdc++.h>
using ll = long long;
using namespace std;
vector < ll > a;
int main()
{
    ll n, k; cin >> n >> k;
 
    for(ll i = 1; i <= n; i++)
    {
        ll x; cin >> x;
        a.push_back(x);
    }
    sort(a.rbegin(), a.rend());
    cout << a[k - 1];
 
}