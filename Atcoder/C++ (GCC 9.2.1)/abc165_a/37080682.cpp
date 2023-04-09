#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n, a, b; cin >> n >> a >> b;
    ll d = 0;
    for(ll i = a; i <= b; i++)
    {
        if(i % n == 0)
        {
            d = 1;
            break;
        }
            
    }
    cout << ( d ? "OK" : "NG" );
    
}

