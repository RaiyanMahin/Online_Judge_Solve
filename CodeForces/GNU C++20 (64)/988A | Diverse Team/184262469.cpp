 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
void baal()
{
    ll a[200] = {0};
    vector < ll > aa;
    ll n, k ; cin >> n >> k;
    set < ll > st ;
 
    for(ll i = 1; i <= n; i++)
    {
        ll x; cin >> x;
 
        st.insert(x);
        if(a[x] == 0)
        {
            aa.push_back(i);
            a[x] = 1;
        }
    }
    if(st.size() < k)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        for(ll i = 0; i < aa.size() and k; i++)
        {
            cout << aa[i] << ' ';
            k--;
        }
    }
}
 
int main()
 
{
 
    ll t = 1;
    while(t--)
    {
        baal();
 
    }
}