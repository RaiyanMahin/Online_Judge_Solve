#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tcc; cin >> tcc;
    while(tcc--)
    {
        string s; cin >> s;
        if(s.size() == 5)
        {
            cout << 1 << endl << s << '\n';
 
        }
        if(s.size() == 4 )
        {
            ll x = s[0] - '0';
            ll y = s[1] - '0';
            ll z = s[2] - '0';
            ll xx = s[3] - '0';
            if(x and y and z and xx)
            {
                cout << 4 << endl << x * 1000 << ' ' << y * 100 << ' ' << z * 10 << ' ' << xx << '\n';
            }
            if(!xx and y and z and x)
            {
                cout << 3 << endl << x * 1000 << ' ' <<  y * 100 << ' ' << z * 10 << '\n';
            }
            if(!z and y  and xx and x)
            {
               cout << 3 << endl << x * 1000 << ' ' << y * 100 << ' ' <<  xx << '\n';
            }
            if(!y and z and xx and x)
            {
               cout << 3 << endl << x * 1000 << ' ' << z * 10 << ' ' << xx << '\n';
            }
            if(!y and !z and !xx and x)
            {
                cout << 1 << endl << s << '\n';
            }
            if(!y and !z and xx)
            {
                cout << 2 << endl << x * 1000 << ' ' << xx << '\n';
            }
            if(!y and !xx and z)
            {
               cout << 2 << endl << x * 1000 << ' ' << z * 10 << '\n';
            }
            if (!z and !xx and y)
            {
               cout << 2 << endl << x * 1000 << ' ' << y * 100 << '\n';
            }
 
 
 
        }
        if(s.size() == 3)
        {
            ll x = s[0] - '0';
            ll y = s[1] - '0';
            ll z = s[2] - '0';
            if(z == 0 and y)
            {
                cout << 2 << endl << x * 100 << ' ' <<  y  * 10 << '\n';
            }
            if(y == 0 and z)
            {
                cout << 2 << endl  << x * 100 << ' ' << z << '\n';
            }
            if(!z and !y)
            {
                cout << 1 << '\n' << s << '\n';
            }
            if(z and y)
            {
                cout << 3 << endl << x * 100 << ' ' << y * 10 << ' ' << z << '\n';
            }
        }
        if(s.size() == 2)
        {
            ll x = s[0] - '0';
            ll y = s[1] - '0';
            if(y == 0)
            {
                cout << 1 << '\n' << s << '\n';
            }
            if(y != 0)
            {
                cout << 2 << '\n' << x * 10 << ' ' << y << '\n';
            }
 
        }
        if(s.size() == 1)
        {
            cout << 1 << '\n' << s << '\n';
        }
 
 
 
 
 
 
 
    }
}