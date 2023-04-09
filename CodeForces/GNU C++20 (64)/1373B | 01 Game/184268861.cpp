#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void baal_1()
{
    cout << "DA\n";
}
void baal_2()
{
    cout << "NET\n";
}
int main()
{
    ll t; cin >> t;
    while(t--)
    {
 
        string s; cin >> s;
        ll n = s.size();
        ll x = count(s.begin(), s.end(), '0');
        ll y = count(s.begin(), s.end(), '1');
        if(!x or !y)
        {
            baal_2();
        }
        if(x and y)
        {
            ll z = min(x, y);
            if(z & 1)
            {
                baal_1();
            }
            else
                baal_2();
 
        }
 
    }
}