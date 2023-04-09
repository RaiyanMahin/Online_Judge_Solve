#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
// 9 20 pm
void baal()
{
    ll n; cin >> n; vector < ll > a(n , 0);
    for(auto &i : a)
        cin >> i;
 
 
    ll mx = -1;
    for(ll i = 0; i < n - 1; i++)
    {
        ll p = (a[i] * a[i + 1]);
        mx = max(mx, p);
 
    }
    cout << mx << endl;
 
 
 
 
 
 
 
 
    return;
 
 
 
 
 
 
 
 
 
}
 
int main()
{
    ll t; cin >> t;
    while(t--)
        baal();
}