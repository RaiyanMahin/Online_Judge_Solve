#include <bits/stdc++.h>
using namespace std;
#define ll long long
set < ll > row, col;
int main()
{
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        row.clear(); col.clear();
        ll sq = 0, co = 0, ro = 0;
        ll n; cin >> n; ll a[n + 5][n + 5] = {0 , 0};
        for(ll i = 1; i <= n ; i++)
        {
            for(ll j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                if(i == j)
                    sq += a[i][j];

            }
        }
        // row duplicate +
        for(ll i = 1; i <= n; i++)
        {
            row.clear();
            for(ll j = 1; j <= n; j++)
            {
                if(row.find(a[i][j]) == row.end())
                {
                    row.insert(a[i][j]);

                }
                else
                {
                    ro++;
                    break;
                }

            }
        }
         // col duplicate +
         for(ll i = 1; i <= n; i++)
        {
            col.clear();
            for(ll j = 1; j <= n; j++)
            {
                if(col.find(a[j][i]) == col.end())
                {
                    col.insert(a[j][i]);

                }
                else
                {
                    co++;
                    break;
                }

            }
        }


        cout << "Case" << ' ' << "#" << r++ << ": " << sq << ' ' << ro << ' ' << co << '\n';

    }
}
