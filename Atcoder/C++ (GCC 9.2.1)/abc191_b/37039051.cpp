#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
ll BAAL ()
{
 string s, res = ""; cin >> s;
        for(ll i = 0; i < s.size(); i++)
        {
            if( !res.empty() and  res.back() == 'A' and s[i] == 'B')
            {
                res.pop_back();
            }
            else if( !res.empty() and res.back() == 'B' and s[i] == 'B')
            {
                res.pop_back();
            }
            else
            {
                res += s[i];
            }
        }
        cout << (ll) res.size() << endl;

}
//ll BAAL2()
//{
//    for(ll i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        mx = max(mx , a[i]);
//    }
//    for(ll i = 1; i <= n; i++)
//    {
//        ll mn = a[i];
//        for(ll j = i + 1; j <= n; j++)
//        {
//            mn = min(mn , a[j]);
//            mx = max(mx , (j - i + 1) * mn);
//
//        }
//    }
//    cout << mx;
//
//}
//#define yes cout << "YES" << endl
//#define no cout << "NO" << endl
//
//
//
//



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll n , x; cin >> n >> x; vector < ll > a;
    while(n--)
    {
        ll c; cin  >> c;
        if(c != x)
        {
            a.push_back(c);
        }
    }
    for(ll i : a)
        cout << i << ' ';





}











