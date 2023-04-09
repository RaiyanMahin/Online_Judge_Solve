#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n; vector < ll > a(n , 0);
        for(auto &i : a)
            cin >> i;
        ll boo = 0;
        for(ll i = 0; i < a.size(); i++)
        {
            ll o = sqrt(a[i]);
            if(o * o != a[i])
            {
                boo = 1;
                break;
            }
        }
        if(boo)
            cout << "YES\n";
        else
            cout << "NO\n";
 
    }
}
 
 
 