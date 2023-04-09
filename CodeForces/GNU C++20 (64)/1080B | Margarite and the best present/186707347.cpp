#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll l ,r; cin >> l >> r;
        ll ans = ( r - l) + 1;
        if(ans == 1)
        {
            if(l & 1 and r & 1)
            {
                cout << -l << '\n';
 
            }
            else
            {
                cout << l << '\n';
            }
        }
        if(ans > 1)
        {
            if( !( l & 1) and !(r & 1 ) )
            {
                cout << (l + r) / 2 << '\n';
 
            }
            if ( (l & 1) and !(r &1 ) )
            {
                cout << ans / 2 << '\n';
            }
            if( (r & 1) and !(l & 1) )
            {
                cout << -(ans / 2) << '\n';
 
            }
            if(( r & 1  ) and (l & 1) )
            {
                cout << - (l + r) / 2 << '\n';
            }
        }
 
 
    }
 
 
}
 