#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define p_case(r) cout << "Case " << r++ << ": "
#define debug(x) cerr << # x << ' ' << x << endl;

const ll Mx = 100009;

vector < pair < ll, ll > > adj[Mx];



void baal()
{
    for(ll i = 0; i < Mx; i++)
    {
        adj[i].clear();
    }
    ll nodes, edges; cin >> nodes >> edges;

    for(ll i = 1; i <= edges; i++)
    {
        ll u,v, w; cin >> u >> v >> w; adj[u].push_back( { v,w } );
        adj[v].push_back( { u,w } );
    }



    vector < ll > dis(nodes + 1, 1e18);
    vector < ll > par(nodes + 2, 0);
    priority_queue < pair < ll, ll >, vector < pair < ll ,ll > > , greater < pair < ll , ll > > > pq;

    ll st = 1;
    pq.push( { 0, st }  );
    dis[st] = 0;

    while(!pq.empty())
    {
        ll Node = pq.top().second;
        pq.pop();


        for(auto x : adj[Node] )
        {
            if(dis[Node] + x.second < dis[x.first])
            {
                par[x.first] = Node;
                dis[x.first] = dis[Node] + x.second;
                pq.push( { dis[x.first], x.first} );
            }
        }
    }
    if(dis[nodes] == 1e18)
    {
        cout << "-1\n"; return;
    }

    vector < ll > Ans;
    for(ll i = nodes; i != 0; i = par[i]) Ans.push_back(i);

    reverse(Ans.begin(), Ans.end());
    for(ll i : Ans) cout << i << ' ';
    cout << endl; return;





    cout << endl; return;


























    return;
}



int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t = 1; //cin >> t; ll r = 1;
    while(t--)
    {
       // p_case(r);
        baal();
    }
}
