#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n; cin >> n;
    ll mx = -INT_MIN;
    ld op = 0;
    ll ans = 0;
    while(n--)
    {
        ll x; cin >> x;
        ans += abs(x);
        mx = max(mx , abs(x));
        op += ( abs(x) * abs(x)  );


    }
    op = sqrt(op);
    cout << ans << endl;
    cout << fixed << setprecision(15) << op << endl;
    cout << mx;


}
