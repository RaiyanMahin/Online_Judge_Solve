#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector < ll > A;
int main()
{
    ll T; cin >> T;
    while(T--)
    {
        A.clear();
        string s; cin >> s; ll x = s.size();
        ll c1 = count(s.begin(), s.end(), '1');
        ll c2 = count(s.begin(), s.end(), '0');
        if(c1 == x || !c2)
        {
 
            cout << x << '\n';
        }
        else if(c2 == x)
        {
            cout << 0 << '\n';
        }
        else if(c1 != x and c2 != x)
        {
            ll o = 0, z = 0;
            for(ll i = 0; i < x; i++)
            {
                if(s[i] == '1')
                {
                    o++;
                }
                else if(s[i] == '0')
                {
                    if(o)
                    {
                        A.push_back(o);
                        o = 0;
                    }
                }
            }
            if(o)
            {
                A.push_back(o);
            }
            ll ans = 0;
            sort(A.rbegin(), A.rend());
            for(ll i = 0; i < A.size(); i += 2)
            {
                ans += A[i];
 
            }
            cout << ans << '\n';
 
 
 
        }
 
    }
}