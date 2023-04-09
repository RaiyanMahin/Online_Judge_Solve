#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        if(n < 2020)
            no;
        if(n >= 2020)
        {
            if(n % 2020 == 0 or n % 2021 == 0)
            {
                yes;
            }
            else
            {
                ld x = ceil(n / 2020);
                ld y = ceil(n / 2021);
                if(x == y)
                {
                    no;
                }
                if(x != y)
                {
                    yes;
                }
 
 
            }
 
        }
    }
}
 
 
 
 
 