#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
char a[101][101];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        for(ll i = 0; i < 101; i++)
        {
            for(ll j = 0; j < 101; j++)
            {
                a[i][j] = '0';
            }
        }
        ll n , m; cin >> n >> m;
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ll c = 0;
        for(ll i = 0; i < n - 1; i++)
        {
            if( a[i][m - 1] != 'D')
                c++;
 
        }
        for(ll i = 0; i < m - 1; i++)
        {
            if( a[n - 1][i] != 'R')
                c++;
 
        }
        cout << c << endl;
 
    }
 
 
}
 