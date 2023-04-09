#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll BB = 0;
        ll x, y , z; cin >> x >> y >> z;
        if(x == y && y == z && !BB)
        {
            BB = 1;
 
            cout << "YES\n";
            cout << x << ' ' << y << ' ' << z << '\n';
        }
        else if(y == z && y != x && !BB)
        {
            if(x > y && !BB)
            {
                BB = 1;
                cout << "NO\n";
            }
            else if(x < y && !BB)  {
                BB = 1;
                cout << "YES\n";
                cout << x << ' ' << x << ' ' << z << '\n';
            }
        }
        else if(x == y && y != z && !BB)
        {
            if(z > x && !BB)
            {
                BB = 1;
                cout << "NO\n";
 
            }
            else if(z < x && !BB)
            {
                BB = 1;
                cout << "YES\n";
                cout << z << ' ' <<  z << ' ' << y << '\n';
            }
 
        }
        else if(x == z && z != y && !BB)
        {
            if( y > z && !BB )
            {
                BB = 1;
                cout << "NO\n";
            }
            else if(!BB && y < z)
            {
                BB = 1;
                cout << "YES\n";
                cout << y << ' ' << y << ' ' << z << '\n';
            }
        }
        else if(!BB)
        {
            cout << "NO\n";
        }
 
 
 
    }
}