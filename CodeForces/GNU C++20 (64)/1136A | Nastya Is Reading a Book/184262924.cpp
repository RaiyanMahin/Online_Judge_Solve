#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n,m,o; cin >> n; ll a[n + 10] , b[n + 10];
    for(ll i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    ll k; cin >> k;
    bool w = false;
    for(ll i = 1; i <= n; i++)
    {
        if(k == a[i] || k == b[i])
        {
            m = i;
            w = true;
            break;
 
        }
    }
    if(w){
        cout << n - m + 1 << '\n';
        return 0;
    }
    if(!w)
    {
        for(ll i = 1; i <= n; i++)
    {
        if(k < a[i] || k < b[i])
        {
            o = i;
            //w = true;
            break;
 
        }
    }
       cout << n - o + 1 << '\n';
        return 0;
    }
 
}