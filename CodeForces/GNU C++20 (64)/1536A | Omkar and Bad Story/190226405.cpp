 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
vector < ll > a;
map < ll, ll > mp;
void baal()
{
    a.clear(); mp.clear();
    ll n; cin >> n;  ll neg = 0;
    for(ll i = 1; i <= n; i++)
    {
        ll x; cin >> x;
        if(x < 0)
        {
            neg++;
        }
        mp[x]++;
        a.push_back(x);
    }
    if(neg)
    {
        cout << "NO\n"; return;
    }
    if(neg == 0)
    {
        cout << "YES\n";
        sort(a.rbegin(), a.rend());
        for(ll i = 0; i < a.size(); i++)
        {
            for(ll j = 0; j < a.size(); j++)
            {
                ll P = abs(a[i] - a[j]);
                if(!mp.count(P))
                {
                    a.push_back(P);
                    mp[P]++;
                }
            }
        }
        cout << a.size() << endl;
        for(ll i : a)
            cout << i << ' ';
        cout << endl;
        return;
    }
 
 
 
 
}
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        baal();
 
 
 
 
    }
}
 
 