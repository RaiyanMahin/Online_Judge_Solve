#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define p_case(r) cout << "Case " << r++ << ": "
#define debug(x) cerr << # x << ' ' << x << endl;

const ll Mx = 100009;

vector < ll > adj[Mx];

ll cats[Mx];
ll nodes, mxxC;

ll ans = 0;

// par_node = parent node
void dfs(ll node, ll par_node, ll numC, ll mxC)
{
    if(cats[node]) numC++;
    else numC = 0;
    mxC = max(mxC, numC);

    ll numChild = 0; // i.e leaf node
    for(auto i : adj[node])
    {
        if(i != par_node)
        {
            dfs(i, node, numC, mxC);
            numChild++;
        }
    }
    if(numChild == 0 && mxC <= mxxC ) ans++;



   // return;



}


void baal()
{
    ans = 0;
    for(ll i = 0; i < Mx; i++)
    {
        adj[i].clear();
    }
    memset(cats, 0, sizeof(cats));


    cin >> nodes >> mxxC;

    for(ll i = 1; i <= nodes; i++)
    {
        cin >> cats[i];
    }

    for(ll i = 1; i <= (nodes - 1); i++)
    {
        ll u,v; cin >> u >> v ; adj[u].push_back(v );
        adj[v].push_back( u );
    }

    dfs(1, -1, 0 ,0);
    /* 1 root node
     -1 parent nai
     0 cur num cat
     0 max num cat
     */
    cout << ans << endl; return;
































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
