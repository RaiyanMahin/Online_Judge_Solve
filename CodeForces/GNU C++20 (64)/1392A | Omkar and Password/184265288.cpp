#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector < ll > a;
set < ll > st;
int main()
{
    ll tcc; cin >> tcc;
    while(tcc--)
    {
        a.clear();
        st.clear();
        ll n; cin >> n;
        for(ll i = 0; i < n; i++)
        {
            ll x; cin >> x;
            a.push_back(x);
            st.insert(x);
        }
        if(st.size() == 1)
        {
            cout << n << '\n';
        }
        if(st.size() > 1)
        {
            cout << 1 << '\n';
        }
 
 
    }
}