 
#include <bits/stdc++.h> /// this is only for contest time
 
 
using namespace std;
 
using ll = long long;
using ld = long double;
using ull = unsigned long long int;
 
 
 
const ll M = 130;
char a[M][M];
int main(  int argc, char const *argv[] )
{
    //FIO;
    ll n , m ; cin >> n >> m;
    for(ll i = 1 ; i <= n; i++)
    {
        for(ll j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll x = 0, y = 0, x1 = 0, y1 = 0;
    for(ll i = 1; i <= n; i++)
    {
        for(ll j = 1; j <= m; j++)
        {
            if(a[i][j] == 'B')
            {
                x = i;
                y = j;
                break;
            }
        }
    }
    for(ll i = n; i >= 1; i--)
    {
        for(ll j = m; j >= 1; j--)
        {
            if(a[i][j] == 'B')
            {
                x1 = i;
                y1 = j;
                break;
            }
        }
    }
    cout << (x + x1) / 2 << ' ' << (y + y1) / 2 << '\n';
   ///timeStamp;
    ///return 0;
 
}
 
 