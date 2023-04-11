#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        ll n; cin >> n; string s; cin >> s; ll ans = 1;
        cout << "Case" << ' ' << "#" << r++ << ": ";
        cout << 1 <<  ' ';
        for(ll i = 1; i < n; i++)
        {
            if(s[i] > s[i - 1] )
            {
                ans++;

            }
            else
                ans = 1;
            cout << ans << ' ';
        }
        cout << endl;





    }
}
