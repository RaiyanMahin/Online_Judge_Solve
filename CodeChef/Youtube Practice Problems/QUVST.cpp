#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll n; cin >> n; queue < ll > st;
    while(n--)
    {
        ll x; cin >> x;
        if(x == 1)
        {
            ll p; cin >> p; st.push(p);

        }
        if(x == 2)
        {
            st.pop();

        }
        if(x == 3)
        {
            cout << st.front() << endl;

        }
    }



}


