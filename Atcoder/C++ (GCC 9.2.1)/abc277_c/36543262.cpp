#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map < ll, vector < ll > > mp;

set < ll > st;

ll mx = 1LL;

void dfs(ll node)
{
    if(st.count(node)) return;
    st.insert(node);
    mx = max(mx, node);
    for(auto i : mp[node])
    {
        dfs(i);
    }
    return;
}
void baal()
{
    mp.clear(); st.clear();
    ll n; cin >> n;
    for(ll i = 1; i <= n; i++)
    {
        ll x, y; cin >> x >> y;
        mp[x].push_back(y);
        mp[y].push_back(x);

    }
    dfs(1);
    cout << mx << endl; return;
}

int main()
{

  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   ll t = 1; //cin >> t; //sf("%lld", &t);
   while(t--)
        baal();
}
