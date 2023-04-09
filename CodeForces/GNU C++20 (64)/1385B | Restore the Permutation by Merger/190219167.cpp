#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const ll MX = 120;
ll a[MX] , b[MX];
vector < ll > rm;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        rm.clear();
 
        memset(a, 0 , sizeof(a));
        memset(b, 0 , sizeof(b));
 
        ll n; cin >> n; ll m = n * 2;
        while(m--)
        {
            ll x; cin >> x;
            if(a[x] == 0)
            {
                rm.push_back(x);
                a[x] = MX;
            }
        }
        for(auto i : rm)
        {
            cout << i << ' ';
        }
        cout << '\n';
 
 
 
 
    }
}