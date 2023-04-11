#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        ll ans = 0;
       string S; cin >> S;
        ll kk = 0, st = 0;
        for(ll i = 0; i < S.size(); i++)
        {
            string ss = S.substr(i, 4), dd = S.substr(i, 5);
            if(ss == "KICK")
                kk++;
            if(dd == "START")
            {
                st++;
                ans += kk;
            }

        }


        //
        cout << "Case" << ' ' << "#" << r++ << ": " << ans << '\n';

    }
}
