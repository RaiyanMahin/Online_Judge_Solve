#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    ll n; cin >> n; vector < ll > a(n) , b(n);
    for(auto &i : a)
    {
        cin >> i;
    }
     for(auto &i : b)
    {
        cin >> i;
    }
    ll s = 0;
    for(ll i = 0; i < a.size(); i++)
    {
        s += (a[i] * b[i]);
    }
    if(s == 0)
        cout << "Yes\n";
    else
        cout << "No\n";


















}
