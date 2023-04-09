#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
 
void baal()
{
    ll n; cin >> n; vector < ll > a(n , 0);
    for(auto &i : a)
        cin >> i;
    string s = "";
 
    ll vis[n + 3] = {0};
    for(ll i = 0; i < n; i++)
    {
        ll val = a[i];
        vis[ val ] = (i + 1);
    }
    ll mx_pos = -1, mn_pos = -1;
    for(ll i = 1; i <= n; i++)
    {
 
        if(i == 1)
        {
            mx_pos = vis[i], mn_pos = vis[i];
            s += '1';
        }
        if(i > 1)
        {
            mx_pos = max(mx_pos, vis[i]);
            mn_pos = min(mn_pos, vis[i]);
 
            ll dis = abs(mx_pos - mn_pos);
            dis++;
 
            if(dis == i)
            {
                s += '1';
            }
            else
            {
                s += '0';
            }
        }
 
 
 
 
 
    }
    cout << s << endl;
 
 
 
 
 
    return;
 
}
 
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        baal();
    }
}
 