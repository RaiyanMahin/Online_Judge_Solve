#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector < ll > a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll TCC; cin >> TCC;
    while(TCC--)
    {
        a.clear();
 
        ll n; cin >> n;
        for(ll i = 1; i <= n; i++)
        {
            ll x; cin >> x;
            a.push_back(x);
        }
       // ll H = n / 2;
        //sort(a.begin(), a.end());
        ll c0 = count(a.begin() , a.end() , 0);
        ll c1 = count(a.begin() , a.end() , 1);
        ll c11 = c1 / 2;
        if(c0 >= c1)
        {
            cout << n / 2 << '\n';
            for(ll i = 1; i <= (n / 2); i++)
            {
                cout << 0 << ' ';
            }
            cout << '\n';
        }
 
        if(c0 < c1 )
        {
            if(c1 % 2 == 0)
            {
                cout << c1 << '\n';
                for(ll i = 1; i <= c1; i++)
                {
                    cout << 1 << ' ';
                }
                cout << '\n';
            }
            if(c1 & 1)
            {
                cout << c1 - 1 << '\n';
                for(ll i = 1; i < c1; i++)
                {
                    cout << 1 << ' ';
                }
                cout << '\n';
 
            }
 
        }
 
 
 
 
 
 
    }
}