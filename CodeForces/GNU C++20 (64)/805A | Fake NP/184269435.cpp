#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b,a % b);
}
int main()
{
    vector <ll >rm;
    ll n,m; cin >> n >> m;
//    ll a2 = 0, a3 = 0, a5 = 0, a7 = 0;
//    for(ll i= n; i <= m; i++)
//    {
//        if(i % 2 == 0) a2++;
//        if(i % 3 == 0) a3++;
//        if(i % 5 == 0) a5++;
//        if(i % 7 == 0) a7++;
//    }
//    rm.push_back(a2); rm.push_back(a3); rm.push_back(a5); rm.push_back(a7);
//    sort(rm.rbegin(),rm.rend());
//    //cout << rm[0] << "eta r" << '\n';
//    if(rm[0] == a2)
//    {
//        cout << 2 ; return 0;
//    }
//    if(rm[0] == a3)
//    {
//        cout << 3 ; return 0;
//    }
//    if(rm[0] == a5)
//    {
//        cout << 5 ; return 0;
//    }if(rm[0] == a7)
//    {
//        cout << 7 ; return 0;
//    }
//      if(gcd(m,n) != 1) {
//        cout << gcd(m,n) << '\n';
//      }
//      if(gcd(m,n) == 1) {
//        cout << 2 << '\n';
//      }
     if(n == m) cout << m;
     else cout << 2;
      
 
}