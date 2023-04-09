#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll MX = 50099;
ll a[MX];
int main()
{
    ll T; cin >> T;
    while(T--)
    {
        for(ll i = 0; i < MX; i++)
        {
            a[i] = 0;
        }
        ll n; cin >> n;
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if(a[0] + a[1] <= a[n - 1])
        {
            cout << "1 2 " << n << '\n';
        }
        if(a[0] + a[1] > a[n - 1])
        {
            cout << -1 << '\n';
        }
 
 
 
 
 
    }
}