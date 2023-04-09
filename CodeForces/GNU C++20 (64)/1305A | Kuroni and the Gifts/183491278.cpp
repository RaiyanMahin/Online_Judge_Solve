#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int R; cin >> R;
    while(R--)
    {
        ll n; cin >> n ; ll a[n + 10], b[n + 10];
        for(ll i = 0 ; i < n; i++) 
        {
            cin >> a[i];
        }
        for(ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n); sort(b, b + n);
        for(ll i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }
        cout << '\n';
        for(ll i = 0; i < n; i++)
        {
            cout << b[i] << ' ';
        }
        cout << '\n';
        
        
    }
}