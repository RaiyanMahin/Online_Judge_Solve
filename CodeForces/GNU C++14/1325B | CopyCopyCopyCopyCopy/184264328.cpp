#include <bits/stdc++.h>
using ll = long long;
using namespace std;
set<ll > rm;
int main()
{
    int t; cin >> t;
    while(t--)
    {
       rm.clear();
       ll n; cin >> n; ll a[n + 10];
       for(ll i = 0; i < n; i++)
       {
           cin >> a[i];
           rm.insert(a[i]);
       }
       cout << rm.size() << '\n';
       rm.clear();
 
    }
}