//long long unsigned
#include <bits/stdc++.h>
using namespace std;
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
//#pragma GCC target ("avx2")
//#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")
 
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
 
using ll = long long ;
 
#define sz(x) (ll)x.size()
#define nn endl
#define debug(x) cerr << # x << ' ' << x << endl;
 
 
void baal()
{
    ll n, ans = 0; cin >> n;
    while (n)
    {
        ans += n;
        n /= 2;
    }
    cout << ans << nn; return;
    
}
int main()
{
     ios_base::sync_with_stdio(false); cin.tie(0);
 
        ll t; cin >> t;
        while (t--)
           baal();
        
}