 
 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector < ll > a;
 
int main()
{
    ll op; cin >> op;
    while(op--)
    {
        a.clear();
 
 
    ll n; cin >> n;
    ll an = 0;
    for(ll i = 0; i < n; i++)
    {
        ll l; cin  >> l;
        a.push_back(l);
    }
    for(ll i = 0; i < (n - 1); i++)
    {
        if(a[i ] > a[i + 1])
        {
            an += (a[i] - a[i + 1]);
        }
    }
    cout << an << "\n";
    }
}
 
 
 
 
 
 