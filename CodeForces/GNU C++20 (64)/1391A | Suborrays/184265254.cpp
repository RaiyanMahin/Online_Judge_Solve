#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll t; cin >> t;
 
 
    while(t--)
    {
        ll n; cin >> n;
        if(n & 1)
        {
            for(int i = 1; i <= n; i += 2)
            {
                cout << i << ' ';
            }
            for(int i = 2; i < n; i += 2)
            {
                cout << i << ' ';
            }
            cout << '\n';
        }
        if(n % 2 == 0)
        {
            for(int i = 1; i < n; i += 2)
            {
                cout << i << ' ';
            }
            for(int i = 2; i <= n; i += 2)
            {
                cout << i << ' ';
            }
            cout << '\n';
 
        }
 
 
 
 
    }
}