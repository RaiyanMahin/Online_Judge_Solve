 
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n; cin >> n; ll a[n + 10], b[n + 10];
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll cnt = 0, s =0;
    for(ll i = 0; i < n; i++)
    {
        if(a[i] >= s)
        {
            cnt++;
            s += a[i];
        }
    }
    cout << cnt << '\n';
 
}