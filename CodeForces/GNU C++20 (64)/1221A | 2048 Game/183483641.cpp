#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
 
vector < ll > a;
 
void baal()
{
    a.clear();
    ll n; cin >> n; ll s = 0, F = 0;
    while(n--)
    {
        ll x; cin >> x;
        if(x == 2048)
            F = 1;
        if(x < 2048)
        {
            a.push_back(x);
        }
    }
    if(F)
    {
        cout << "YES\n"; return;
    }
    if(a.size() == 0)
    {
        cout << "NO\n"; return;
    }
    F = 0;
    sort(a.rbegin(), a.rend());
    for(ll i : a)
    {
        s += i;
        if(s == 2048)
        {
            F = 1; break;
 
        }
    }
    cout << (F ? "YES" : "NO") << endl; return;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return;
 
}
 
 
 
int main()
{
    ll t; cin >> t;
    while(t--)
        baal();
}