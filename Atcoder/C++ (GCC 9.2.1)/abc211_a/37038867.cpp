#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll a, b; cin >> a >> b;
    long double c = (a - b) / 3.00;
    c += (b * 1.0);

    cout <<  fixed << setprecision(10) << c << endl;
//    ll t; cin >> t;
//    while(t--)
//    {
//        ll n, k ; cin >> n >> k; string s; cin >> s; ll c = 0;
//        if(s[0] == 'W')
//            c++;
//        for(ll i = 1; i < n; i++)
//        {
//            if(s[i] == s[i - 1] and s[i] == 'W')
//            {
//                c += 2;
//            }
//            else if(s[i] != s[i - 1] and s[i] == 'W')
//            {
//                c += 1;
//            }
//        }
//
//
//
//
//
//
//
//
//
//
//
//    }
















}
