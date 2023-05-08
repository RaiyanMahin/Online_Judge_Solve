#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll sieve(ll n)
{


    for(ll i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;

}

void baal_1()
{
    
    cout << "YES\n";
}
void baal_2()
{
    cout << "NO\n";
}
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        if(n <= 3)
        {
            baal_2();
        }
        if(n > 3)
        {
            if(! (n & 1) )
            {
                if(n == 4)
                {
                    baal_1();
                }
                if(n > 4)
                {
                    baal_2();
                }
            }
            if(n & 1)
            {
                ll x = (ll)sqrt(n);

                if(  ll(x * x) == (ll) n )
                {
                    ll p = sieve(x);
                    if(p == 0)
                    {
                        baal_2();
                    }
                    if(p == 1)
                    {
                        baal_1();
                    }



                }
                if( ll(x * x) != (ll) n )
                {
                    baal_2();


                }
            }
        }
    }
}
