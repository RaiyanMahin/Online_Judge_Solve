#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
void baal()
{
    //cout << "YES\n"; return;
    ll a, b, c, d; cin >> a >> b >> c >> d;
    vector < ll > vv; vv.push_back(a); vv.push_back(b); vv.push_back(c) ;vv.push_back(d);
    sort(vv.rbegin(), vv.rend());
    ll M1 = vv[0], M2 = vv[1];
    if(M1 == a or M1 == b)
    {
        if(M2 == c or M2 == d)
        {
            cout << "YES\n"; return;
 
        }
    }
    if(M2 == a or M2 == b)
    {
        if(M1 == c or M1 == d)
        {
            cout << "YES\n"; return;
 
        }
    }
    cout << "NO\n"; return;
 
 
}
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        baal();
 
 
 
 
 
 
 
    }
}
// 8  :58