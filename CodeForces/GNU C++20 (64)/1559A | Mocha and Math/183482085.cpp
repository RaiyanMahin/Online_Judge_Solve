#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
 
void baal()
{
    ll n; cin >> n; vector < ll > a(n , 0);
    for(auto &i : a)
        cin >> i;
    ll aa = a[0];
    for(ll i = 1; i < n; i++)
    {
        aa &= a[i];
    }
    cout << aa << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return;
 
}
 
 
 
int main()
{
    ll t; cin >> t;
    while(t--)
        baal();
}