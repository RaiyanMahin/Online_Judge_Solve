#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n; cin >> n; ll a[n + 10];
    for(ll i = 0 ; i < n ; i++)
        cin >> a[i];
    for(ll i = 0 ; i < n - 1; i++)
    {
        for(ll j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                ll tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    ll s = 0;
    for(ll i = 0 ; i < n; i += 2)
    {
       s += a[i + 1] - a[i];
 
    }
    cout << s << '\n';
 
 
 
 
}