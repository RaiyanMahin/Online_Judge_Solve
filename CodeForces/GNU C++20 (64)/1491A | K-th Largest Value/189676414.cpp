#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
 
    ll n , q; cin >> n >> q; vector < ll > a(n , 0);
    ll c0 = 0, c1 = 0;
    for(auto &i : a)
    {
        cin >> i;
        if(i == 1)
            c1++;
        else
            c0++;
    }
 
    while(q--)
    {
        ll x, y; cin >> x >> y;
        if(x == 1)
        {
            ll op = a[y - 1];
            if(op == 1)
            {
               c0++;
               if(c1)
               {
                   c1--;
               }
            }
            if(op == 0)
            {
                c1++;
                if(c0)
                {
                    c0--;
                }
            }
            a[y - 1] = 1 - a[y - 1];
 
 
        }
        else if(x == 2)
        {
            if(c1 >= y)
                cout << 1 << endl;
            else
                cout << 0 << endl;
 
 
        }
    }
 
}