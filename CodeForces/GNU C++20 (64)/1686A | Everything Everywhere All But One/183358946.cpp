//Start MERGING INTO ONE HANDLE
#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long int;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
 
 
 
 
set < double > st;
 
void Solve()
{
    st.clear();
    ll n; cin >> n; double s = 0;
    for(ll i = 1; i <= n; i++)
    {
        ll x; cin >> x;
        st.insert( (double) (x * 1.0) ); s += x;
    }
//    for(auto i : st) cout << i << ' ';
//
//    cout << endl;
    double K = (double) ( (s * 1.0 / n * 1.0) );
    //cout << K << endl;
 
    if(st.count(K)) yes;
 
    else no;
 
    return;
 
 
 
 
 
 
}
 
int main() {
   ios::sync_with_stdio(false);
    cin.tie(0);
 
  ll TT; cin >> TT;
  while(TT--)
  {
 
 
    Solve();
      
  }
 
}
 