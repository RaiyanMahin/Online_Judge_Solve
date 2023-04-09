#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n, k; cin >> n >> k;
    ll x = n / k;
    if(x & 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}