#include <bits/stdc++.h>
using namespace std;
using ll = long double;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    while(t--)
    {
        ll v,a,b, s; cin >> v >> a >> b >> s;
        ll baal = s / v;
        if(a <= baal and baal <= b)
        {
            cout << "No\n";

        }
        else
            cout << "Yes\n";








    }

}
