#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll baal = 0; ll k; cin >> k; ll a, b; cin >> a >> b;
    for(ll i = a; i <= b; i++)
    {
        if(!(i % k))
        {
            baal = 1; break;
        }
    }
    cout << (baal ? "OK" : "NG");
}




