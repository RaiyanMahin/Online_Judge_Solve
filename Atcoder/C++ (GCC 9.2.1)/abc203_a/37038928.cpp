#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
int main()
{
    ll a, b, c; cin >> a >> b >> c;
    if(a == b and a != c)
        cout << c << endl;
    else if(c == b and a != c)
        cout << a << endl;
    else if(a == c and b != c)
        cout << b << endl;
    else  if(a == b and a == c)
        cout << c << endl;
    else if(a != b and b != c)
        cout << "0\n";
//    ll t; cin >> t;
//    while(t--)
//    {
//        ll n; cin >> n;
//
//        while(true)
//        {
//            if(n < 10)
//                break;
//            if(n >= 10)
//            {
//                string s = to_string(n); ll x = (ll)s.size();
//
//                 string T(x, '1');
//                  ll e_1 = toInt(T);
//                  n -= e_1;
//            }
//
//
//
//        }
//
//        if(n == 0)
//            cout << "YES\n";
//        else
//            cout << "NO\n";
//
//
//    }
}
