#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector < ll > vec;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        vec.clear();
        ll n, a, b, x; cin >> n >> a >> b >> x; string s; cin >> s;
        ll c1 = 0, c0 = 0;
        for(ll i = 0; i < n; i++)
        {
            if(s[i] == '0')
                c0++;
            else if(s[i] == '1')
                c1++;
 
        }
        ll p1 = c0 * a + c1 * b; vec.push_back(p1);
        ll X = min(a, b);
        ll ans = 0;
        if(X == a)
        {
            ll p2 = c0 * a + x * (n - c0) + (n - c0) * a;
            vec.push_back(p2);
 
        }
        else if(X == b)
        {
            ll p2 = c1 * b + x * (n - c1) + (n - c1) * b;
            vec.push_back(p2);
 
        }
        sort(vec.begin(), vec.end());
        cout << vec[0] << endl;
 
 
    }
 
 
}