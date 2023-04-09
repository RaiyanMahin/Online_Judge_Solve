#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll n ; cin >> n; string s , t; cin >> s >> t;
       // sort(s.rbegin(), s.rend()); sort(t.rbegin(), t.rend());
        ll rr = 0, bb = 0, eq = 0;
        for(ll i = 0; i < s.size(); i++)
        {
            if(s[i] == t[i])
            {
                eq++;
            }
            else if(s[i] > t[i])
            {
                rr++;
            }
            else
            {
                bb++;
            }
        }
        if(eq == n or (rr == bb))
        {
            cout << "EQUAL\n";
        }
        else if(rr > bb)
        {
             cout << "RED\n";
        }
        else
        {
            cout << "BLUE\n";
        }
 
    }
}