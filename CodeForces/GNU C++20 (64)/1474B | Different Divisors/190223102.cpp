#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
#define mx 10000009
bitset < mx > mark;
vector < ll > prime;
void sieve()
{
    mark[0] = mark[1] = 1;
    prime.push_back(2);
    ll lim = sqrt(mx * 1.0) + 2;
    for (ll i = 4; i < mx; i += 2) mark[i] = 1;
    for (ll i = 3; i < mx; i += 2) {
        if (!mark[i]) {
            prime.push_back(i);
            if (i <= lim)
                for (ll j = i * i; j < mx; j += i)
                    mark[j] = 1;
        }
    }
 
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    sieve();
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
     
        
       ll P = *upper_bound(prime.begin(), prime.end(), n);
       
     ll Q = *upper_bound(prime.begin(), prime.end(), n + P - 1);
        cout << P * Q << endl;
        
 
 
 
 
    }
}