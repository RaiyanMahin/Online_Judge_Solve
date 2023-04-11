#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100009
bitset <mx> mark;
vector <ll> primes;

void sieve()
{
    mark[0] = mark[1] = 1;
    primes.push_back(2);
    ll lim = sqrt(mx * 1.0) + 2;
    for (ll i = 4; i < mx; i += 2) mark[i] = 1;
    for (ll i = 3; i < mx; i += 2)
    {
        if (!mark[i])
        {
            primes.push_back(i);
            if (i <= lim)
                for (ll j = i * i; j < mx; j += i)
                    mark[j] = 1;
        }
    }
}
int main()
{

    sieve();
    vector < ll > mull;
    ll sz = primes.size();
    for(ll i = 0; i < sz - 1; i++)
    {
        ll p = primes[i] * primes[i + 1];
        mull.push_back(p);
    }
    ll t; scanf("%lld", &t); ll r = 1;

    while(t--)
    {
        ll n; scanf("%lld", &n);
       // cout << "Case" << ' ' << "#" << r++ << ": ";
        printf("Case #%lld: ", r++);

        ll Lo = lower_bound(mull.begin(), mull.end(), n) - mull.begin();
        ll ache = mull[Lo];
        if(ache > n)
        {
            Lo--;
            ache = mull[Lo];
        }
        printf("%lld\n", ache);








    }
}
