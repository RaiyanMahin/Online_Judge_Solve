#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        ll n , k; cin >> n >> k; ll ans = 0; string s; cin >> s; ll op = 0;
        for(ll i = 0; i < n / 2; i++)
        {
            if(s[i] != s[n - i - 1])
            {
                op++;
            }




        }


        cout << "Case" << ' ' << "#" << r++ << ": " << abs(k - op) << '\n';

    }
}
