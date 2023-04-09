#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n, m; cin >> n >> m;
    char a[n][m];
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll cnt = 0;
    for(ll i = 0; i < n; i++)
    {
        for(ll j = 0; j < m; j++)
        {
            if(a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y' )
            {
                cnt = 1;
                break;
            }
        }
    }
    cout << ( !cnt ? "#Black&White" : "#Color" ) << '\n';
 
}