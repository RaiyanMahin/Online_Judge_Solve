#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    ll c = 0 , ok = 0;
    while(n--)
    {
        ll a, b; cin >> a >> b;
        if(a == b)
            c++;
        if(a != b)
            c = 0;
        if(c == 3)
            ok = 1;
    }
    if(ok)
        cout << "Yes\n";
    else
        cout << "No\n";
}
