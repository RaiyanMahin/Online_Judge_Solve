#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MX = 200009;
vector < ll > adj[MX];
bool vis[MX];

map < ll, vector < ll > > mp;

set < ll > st;

ll mx = 1;

void dfs(ll node)
{
    if(st.count(node)) return;
    st.insert(node);
    mx = max(mx, node);

   // cout << " node  = " << node << " mx = " << mx << endl;

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
//
//    for(auto i : mp)
//    {
//        ll o = i.first;
//        for(auto j : mp[o])
//        {
//            cout << j << ' ';
//        }
//        cout << " sss \n";
//
//    }
    dfs(1);


    cout << mx << endl; return;







    return;
}

int main()
{

  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   ll t = 1; //cin >> t; //sf("%lld", &t);
   while(t--)
        baal();
}
