#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[402][402];
ll v[4];
int main()
{
    ll t; cin >> t;
    while(t--)
    {
          for(ll i = 0; i <= 401; i++)
        {
            for(ll j = 0; j <= 401; j++)
            {
                a[i][j] = '0';
            }
        }
 
        for(ll i = 0; i < 4; i++)
            v[i] = -1;
        ll n; cin >> n;  ll boo = 0;
 
 
        for(ll i = 1; i <= n; i++)
        {
            for(ll j = 1; j <= n; j++)
            {
                cin >> a[i][j];
 
 
            }
        }
       // cout << " test \n";
 
        for(ll i = 1; i <= n; i++)
        {
            for(ll j = 1; j <= n; j++)
            {
                if(a[i][j] == '*' and !boo)
                {
                    boo++;
                    v[0] = i;
                    v[1] = j;
 
 
                }
                else if(a[i][j] == '*' and boo)
                {
                    v[2] = i;
                    v[3] = j;
                }
 
 
            }
 
        }
        if(v[0] == v[2])
        {
             if(v[0] != n)
            {
                v[0] = v[0] + 1;
                v[2] = v[2] + 1;
            }
            else if(v[0] == n)
            {
                v[0] = v[0] - 1;
                v[2] = v[2] - 1;
 
            }
 
            //v[0] = v[1]; v[2] = v[1];
        }
        else if(v[1] == v[3])
        {
            if(v[1] != n)
            {
                v[1] = v[1] + 1;
                v[3] = v[3] + 1;
            }
            else if(v[1] == n)
            {
                v[1] = v[1] - 1;
                v[3] = v[3] - 1;
 
            }
 
 
        }
       // cout <<  " test " << v[0] << v[1] <<v[2] <<v[3] << endl;
        for(ll i = 1; i <= n; i++)
        {
            for(ll j = 1; j <= n; j++)
            {
                if(i == v[0] and j == v[3])
                {
                    a[i][j] = '*';
                }
                else if(i == v[2] and j == v[1])
                {
                    a[i][j] = '*';
 
                }
            }
        }
        for(ll i = 1; i <= n; i++)
        {
            for(ll j = 1; j <= n; j++)
            {
               cout << a[i][j];
            }
            cout << endl;
        }
       // cout << " ggggg \n";
 
 
 
 
 
    }
}