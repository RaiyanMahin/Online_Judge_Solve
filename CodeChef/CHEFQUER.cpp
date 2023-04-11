#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll n, q; scanf("%lld%lld", &n, &q);
    ll a[n + 5] = {0};
    ll L , R, val, y, vis = 0;
    for(ll i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);

    }
    while(q--)
    {
        ll x; scanf("%lld", &x);
        if(x == 1)
        {
            scanf("%lld%lld%lld", &L, &R, &val);
            for(ll i = L; i <= R; i++)
            {
                ll op = (val + i - L)*(val + i - L);
                ll kk = a[i] + op;
                a[i] = kk;

            }


        }
        else if(x == 2)
        {
            scanf("%lld", &y);

            printf("%lld\n", a[y]);

        }













    }










}


