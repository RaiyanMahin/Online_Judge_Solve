 
#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long int;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
 
 
 
void Solve()
{
    ll n; cin >> n; vector < ll > a(n , 0); ll od = 0, ev = 0;
    for(ll &i : a)
    {
        cin >> i;
        if(i & 1) od++;
        else ev++;
    }
 
    if(od == n or ev == n)
    {
        cout << "0\n"; return;
    }
    cout << min(od, ev) << '\n'; return;
 
 
 
 
 
 
 
 
 
}
 
int main() {
     // ios::sync_with_stdio(false);    cin.tie(0);
 
  ll TT; cin >> TT;
  while(TT--)
  {
 
 
    Solve();
  }
}
 