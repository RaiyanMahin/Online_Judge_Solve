#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n,b,d; cin >> n >> b >> d;
    ll a[n], s = 0, cnt = 0;
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] <= b)
            s += a[i];
        if(s > d)
        {
            cnt++;
            s = 0;
        }
 
    }
    cout << cnt;
 
 
 
 
}