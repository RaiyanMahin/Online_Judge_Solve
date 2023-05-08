#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define p_case(r) cout << "Case " << r++ << ": "

const ll MX = 200009;

vector < ll > adj[MX];
ll vis[MX];
ll color[MX];
ll col[2];
ll ache[MX];

void dfs(ll node, ll cor) // cor means color?
{
    if(vis[node] == 1) return;
    vis[node] = 1;
    color[node] = cor;
    col[ color[node] ]++;
    for(auto u : adj[node])
        dfs(u, cor ^ 1);

    return;
}

void baal()
{
    for(ll i = 0; i < MX; i++) adj[i].clear();
    for(ll i = 0; i < MX; i++)
    {
        vis[i] = 0;
        color[i] = 0;
        ache[i] = 0;
    }
    col[0] = col[1] = 0;

    ll n; cin >> n;

    for(ll i = 1; i <= n; i++)
    {
        ll x, y; cin >> x >> y; ache[x] = 1, ache[y] = 1;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    col[0] = col[1] = 0;
    ll ans = 0;

    for(ll i = 1; i <= 20000; i++)
    {
        if(!ache[i]) continue;
        if(vis[i]) continue;
        dfs(i, 0);
        ans += max(col[0], col[1]);
        col[0] = col[1] = 0;

    }

    cout << ans << endl; return;
















    return;
}



int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        p_case(r);
        baal();
    }
}
