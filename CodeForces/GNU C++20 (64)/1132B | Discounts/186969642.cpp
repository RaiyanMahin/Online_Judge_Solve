#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n ; cin >> n ; vector < ll > a(n , 0);
    for(auto &i : a)
        cin >> i;
    sort(a.rbegin(), a.rend());
    vector < ll > b;
    ll s = 0;
    for(ll i = 0; i < a.size(); i++)
    {
        s += a[i];
        b.push_back(s);
    }
 
 
 
 
 
    ll q; cin >> q;
    while(q--)
    {
        ll k; cin >> k;
        cout << b[k - 2] + (abs(b[k - 1] - b.back()))  << endl;
 
    }
 
 
 
}