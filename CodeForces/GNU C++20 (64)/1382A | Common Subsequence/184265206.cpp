#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector < ll > a , b;
map < ll, ll > mp1;
int main()
{
    ll tcc; cin >> tcc;
    while(tcc--)
    {
        a.clear();
        b.clear();
        mp1.clear();
 
        ll ans = 0;
        ll n , m; cin >> n >> m;
 
            for(ll i = 0; i < n; i++)
            {
                ll oo; cin >> oo; a.push_back(oo);
                mp1[oo]++;
            }
            for(ll i = 0; i < m; i++)
            {
                ll oO; cin >> oO; b.push_back(oO);
                if(mp1[oO] >= 1)
                {
                    ans = b[i];
 
                }
            }
            if(ans == 0)
            {
                cout << "NO\n";
            }
            if(ans > 0)
            {
                cout << "YES\n";
                cout << "1 " << ans << '\n';
            }
 
 
 
 
 
 
    }
}