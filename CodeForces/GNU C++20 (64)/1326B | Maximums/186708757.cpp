#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define MX 200000
ll b[MX] , a[MX];
vector < ll > rm;
int main()
{
    ll n; cin >> n;
    for(ll i = 0; i < n; i++)
    {
        cin >> b[i];
        rm.push_back(b[i]);
        if(b[i] <= 0)
        {
            b[i] = 0;
        }
 
    }
    a[0] = b[0];
    for(ll i = 1; i < n; i++)
    {
        a[i] = a[i - 1] + b[i];
 
 
 
    }
    for(ll i = 0; i < n; i++)
    {
        if(rm[i] <= 0)
        {
            cout << a[i - 1] + rm[i] << ' ';
        }
        if(b[i] > 0)
        {
            cout << a[i] << ' ';
        }
    }
    cout << '\n';
 
 
 
}