#include <bits/stdc++.h>
using namespace std;
 
using ll = long long ;
 
#define pf printf
#define sf scanf
#define F first
#define S second
#define gcd(a, b)  __gcd(a, b)
#define lcm(a, b)  (a * b) / ( __gcd(a, b ) )
#define pb emplace_back
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define p_case(r)  cout << "Case " << r++ << ": "
 
 
 
 
const ll M = 30005;
vector < pair < ll, ll > > adj[M];
bool vis[M];
ll dis[M];
ll mx = 0;
 
void dfs(ll node, ll dist)
{
    if(vis[node] == 1) return;
    vis[node] = 1;
    mx = max(mx , dist);
    dis[node] = dist;
    for(auto u : adj[node])
    {
        dfs(u.first, dist + u.second );
    }
 
    return;
 
}
 
 
void baal()
{
 
 
    ll nodes, edges; cin >> nodes; edges = nodes - 1;
    for(ll i = 0; i < nodes; i++) vis[i] = 0;
 
    for(ll i = 0; i < edges; i++)
    {
        ll u,v,w; cin >> u >> v >> w;
        adj[u].push_back( {v,w} );
        adj[v].push_back( { u,w } );
    }
    mx = 0;
    dfs(0, 0);
 
    ll nxt_node;
 
    for(ll i = 0; i < nodes; i++)
    {
        if(dis[i] == mx)
        {
            nxt_node = i; break;
        }
    }
 
    for(ll i = 0; i < nodes; i++) vis[i] = 0;
 
    mx = 0;
    dfs(nxt_node, 0);
 
    cout << mx << endl;
    for(ll i = 0; i < M; i++)
    {
        adj[i].clear();
        vis[i] = 0;
        dis[i] = 0; //dis remains same
    }
    return;
 
 
}
 
int main()
{
 
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        p_case(r); baal();
    }
 
}