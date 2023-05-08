#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define p_case(r) cout << "Case " << r++ << ": "
#define debug(x) cerr << # x << ' ' << x << endl;

const ll Mx = 25;

char c[Mx][Mx];

ll vis[Mx][Mx];
ll dx[] = {-1, 0,1,0};
ll dy[] = {0, 1,0, -1};
//dp[i][j]: the longest consecutive sequence start at (i,j)

ll n, m;
ll ans = 0;

void dfs(ll x, ll y)
{

    vis[x][y] = 1;
    ans++;

        for(ll in = 0; in < 4; in++)
        {
            ll nx = x+dx[in], ny = y+dy[in]; //new_x, new_y

            if(nx >= 0 and ny >= 0 and nx < n and ny < m and c[nx][ny] != '#' and vis[nx][ny] == 0)
            {
                dfs(nx, ny);
            }
//			if (nx<0 || ny<0 || nx>=n || ny>=m || c[nx][ny] != '.' || vis[nx][ny]) continue;
//
//
//            dfs(nx, ny);



        }


    return;










}

void baal()
{
    memset(vis, 0, sizeof(vis));
    pair < ll, ll > pp = {0,0};
    n = 0, m = 0;
    ans = 0;
    /*for(ll i = 0; i < Mx; i++)
    {
        for(ll j = 0; j < Mx; j++)
        {
            c[i][j] = '5';
        }
    } */




    cin >> m >> n;
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            cin >> c[i][j];
            if(c[i][j] == '@')
            {
                pp.first = i, pp.second = j;
            }
        }
    }



    dfs(pp.first, pp.second);



    cout << ans << endl;
    return;
















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
