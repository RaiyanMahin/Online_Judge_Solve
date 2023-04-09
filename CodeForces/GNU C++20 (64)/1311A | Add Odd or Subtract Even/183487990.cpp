//bool co_p(ll n, ll i)
//{
//    if(__gcd(n,i) == 1)
//    {
//        return true;
//
//    }
//    else return false;
//}
//int main()
//{
//    ll n, cnt = 0;
//    while( cin >> n && n != 0)
//    {
//        for(ll i = 1; i <= n; i++)
//        {
#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll a, b; cin >> a >> b;
       // ll cnt = 0;
        if(a > b)
        {
            ll ddd = abs(a- b);
            if(ddd % 2 == 1)
                cout << 2 << '\n';
            else cout << 1 << '\n';
        }
       else  if(a < b)
        {
            ll dddd = abs(a- b);
            if(dddd % 2 == 1)
                cout << 1 << '\n';
            else cout << 2 << '\n';
        }
        else cout << 0 << '\n';
    }
}