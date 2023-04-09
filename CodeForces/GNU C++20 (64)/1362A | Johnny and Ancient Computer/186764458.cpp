#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define debug(x) cout << " --- >" << x << '\n'
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll a, b; cin >> a >> b;
        if(a == b)
        {
            cout << 0 << '\n';
        }
        if(a > b)
        {
            ll f_8 = 0, f_4 = 0, f_2 = 0;
            while( (a / 8) >= b and a % 8 == 0)
            {
                a /= 8;
                f_8++;
 
            }
            while( (a / 4) >= b and a % 4 == 0  )
            {
                a /= 4;
                f_4++;
 
            }
            while( (a / 2) >= b and a % 2 == 0 )
            {
                a /= 2;
                f_2++;
            }
            if(a != b)
            {
                cout << -1 << '\n';
            }
            if(a == b)
            {
                cout << f_8 + f_4 + f_2 << '\n';
            }
            f_8 = 0, f_4 = 0, f_2 = 0;
 
 
 
        }
        if(a < b)
        {
            ll c_8 = 0, c_4 = 0, c_2 = 0;
            while(a * 8 <= b)
            {
                a *= 8;
                c_8++;
 
 
            }
            while(a * 4 <= b)
            {
                a *= 4;
                c_4++;
            }
            while(a * 2 <= b)
            {
                a *= 2;
                c_2++;
            }
            if(a != b)
            {
                cout << -1 << '\n';
            }
            if(a == b)
            {
                cout << c_8 + c_4 + c_2 << '\n';
            }
            c_8 = 0, c_4 = 0, c_2 = 0;
 
        }
 
    }
}