//long long unsigned
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
 
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
 
using ll = long long ;
 
#define sz(x) (ll)x.size()
#define nn '\n'
 
 
 
 
const ll OP = 100009;
ll n, kk;
vector < ll > a(OP, 0), b(OP, 0);
 
ll F(ll mid)
{
    ll o = 0;
    for(ll i = 0; i < n; i++)
    {
        ll k = a[i] * mid;
 
        if(k > b[i])
        {
            o += (k - b[i]);
            if(o >= 1e10)
            {
                return o;
            }
        }
    }
    return o;
}
 
void baal()
{
    cin >> n >> kk;
    
    a.resize(n); b.resize(n); 
 
    for(ll &i : a) cin >> i; for(ll &i : b) cin >> i;
 
    ll low = 0, high = 2e9, ans = 0;
 
    while (low <= high)
    {
        ll mid = (low + high) >> 1;
        if(F(mid) > kk)
        {
            high = mid - 1;
        }
        else
        {
            ans = mid;
            low = mid + 1;
        }
    }
    cout << ans << nn; return;
    
 
   
}
 
int main()
{
     ios_base::sync_with_stdio(false); cin.tie(0);
 
        baal();
}