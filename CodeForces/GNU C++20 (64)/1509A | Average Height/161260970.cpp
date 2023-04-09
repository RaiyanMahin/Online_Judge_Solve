#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector < ll > odd , even;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        odd.clear(); even.clear();
        ll n; cin >> n;
        for(ll i = 1; i <= n; i++)
        {
            ll x; cin >> x;
            if(x & 1)
                odd.push_back(x);
            else
                even.push_back(x);
        }
        ll o1 = odd.size(), o2 = even.size();
        if(o1 >= o2)
        {
            for(ll i : odd)
                cout << i << ' ';
            for(ll i : even)
                cout << i << ' ';
            cout << endl;
        }
        else
        {
            for(ll i : even)
                cout << i << ' ';
            for(ll i : odd)
                cout << i << ' ';
            cout << endl;
 
        }
 
    }
}