#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
set < ll > st;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        st.clear(); ll n, k; cin >> n >> k; vector < ll > a(n, 0);
        for(auto &i : a)
        {
            cin >> i; st.insert(i);
        }
        ll uni = st.size(), parbe = (n - uni);
        if(parbe >= k)
            cout << uni << endl;
        else
        {
            ll extr = (k - parbe);
            uni -= extr;
            cout << uni << endl;
        }
    }
}


