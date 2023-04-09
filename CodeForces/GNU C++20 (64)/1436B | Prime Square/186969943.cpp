#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll a[n + 2][n + 2];
        if(n == 2)
        {
            cout << "1 1\n1 1\n";
        }
        if(n > 2)
        {
               if(n % 2 == 0)
               {
                   for(ll i = 1; i <= n; i++)
                    {
                       for(ll j = 1; j <= n; j++)
                       {
                       if( (i == j) or (i + j == (n + 1)) )
                       {
                           a[i][j] = 1;
                       }
                       else
                       {
                           a[i][j] = 0;
                       }
 
 
                   }
 
                  }
                  for(ll i = 1; i <= n; i++)
                  {
                      for(ll j = 1; j <= n; j++)
                      {
                          cout << a[i][j] << ' ';
                      }
                      cout << endl;
                  }
 
               }
               else if(n & 1)
               {
                   ll r = (n / 2) + 1;
 
                   for(ll i = 1; i <= n; i++)
                    {
                       for(ll j = 1; j <= n; j++)
                       {
                       if( (i == j) or (i + j == (n + 1)) )
                       {
                           a[i][j] = 1;
                       }
                       else
                       {
                           a[i][j] = 0;
                       }
 
 
                   }
 
                  }
                   a[r][1] = 1;
                   a[n][r] = 1;
                   for(ll i = 1; i <= n; i++)
                  {
                      for(ll j = 1; j <= n; j++)
                      {
                          cout << a[i][j] << ' ';
                      }
                      cout << endl;
                  }
               }
 
             }
 
            }
        }
 
 
 
 