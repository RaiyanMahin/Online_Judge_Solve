///loser
 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll ttccc; cin >> ttccc;
    while(ttccc--)
    {
        ll x, n,m; cin >> x >> n >> m; ll h = x;
        bool d1 = true;
        while(d1)
        {
            ll y = h / 2;
            y += 10;
            if(y > h or n == 0)
                d1 = false;
            else
            {
                 h = y;
                 n--;
            }
 
        }
        ll r = 10 * m;
 
        if(r >= h)
            cout << "YES" << endl;
        else
            cout <<  "NO" << endl;
    }
}