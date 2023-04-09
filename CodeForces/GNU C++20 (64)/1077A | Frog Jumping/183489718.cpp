#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll a,b, k; cin >> a >> b >> k; ll s = 0;
        if(  ! (k & 1) )
        {
            for(ll i = 1; i <= (k / 2); i++)
        {
            s += ( a - b);
 
        }
        cout << s << '\n';
        s = 0;
        }
        if( k & 1)
        {
            for(ll i = 1; i <= (k / 2); i++)
        {
            s += ( a - b);
 
        }
        cout << s + a << '\n';
        s = 0;
        }
    }
}