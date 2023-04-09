#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
 
void baal()
{
    ll n; cin >> n; vector < ll > a(n, 0);
    for(auto &i : a)
        cin >> i;
 
 
    // baal
    /*  last time WA coz 7,6,5,2,2 here 2,2 reduces 1 swap, so though full reverse answer will be YES
    */
    ll p = 0;
    for(ll i = 0; i < n - 1; i++)
    {
        if(a[i] <= a[i + 1])
        {
            p = 1; break;
        }
    }
    cout << (p ? "YES" : "NO") << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return;
 
}
 
int main()
{
    ll t; cin >> t;
    while(t--)
        baal();
}