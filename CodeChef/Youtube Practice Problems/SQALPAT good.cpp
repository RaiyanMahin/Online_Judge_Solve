#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll n; cin >> n; ll cur_val = 1;
    for(ll i = 1; i <= n; i++)
    {

        if(i & 1)
        {
            for(ll k = 1; k <= 5; k++)
                cout << cur_val++ << ' ';
            cout << endl;


        }
        else if(i % 2 == 0)
        {
            ll tmp = cur_val + 5, org = tmp;
            for(ll k = 1; k <= 5; k++)
                cout << --tmp << ' ';
            cur_val = org;
            cout << endl;

        }
    }





}


