 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll a , b; cin >> a >> b; ll x = (b - a + 1) / 2;
    cout << "YES\n";
    vector < ll > od , ev;
    ll mn = min(a, b);
 
        for(ll i = mn; i <= max(a, b); i += 2)
        {
            od.push_back(i);
        }
        for(ll i = mn + 1; i <= max(a, b); i += 2)
        {
            ev.push_back(i);
        }
        for(ll i = 0; i < od.size(); i++)
        {
            cout << od[i] << ' ' << ev[i] << endl;
        }
        return 0;
 
 
 
 
 
 
}