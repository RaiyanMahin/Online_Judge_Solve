#include <bits/stdc++.h>
using ll = int;
//#define int long long
using namespace std;
ll sieve(ll n)
{
    ll x = -1;
    for(ll i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0)
        {
            x = i;
            break;
        }
    }
    return x;
}
main() {
   // sieve();
    ll t ;
    scanf("%d",&t);
    while(t--)
    {
 
      //  mem(List , 0);
        ll N;
        scanf("%d",&N);
        if(N  % 2 == 0)
        {
            cout << N / 2 << ' ' << N / 2 << '\n';
        }
        if(N % 2 == 1)
        {
            ll Cx = sieve(N);
            //cout << Cx << '\n';
 
 
 
    if(Cx == -1)
    {
        cout << N - 1 << ' ' << 1 << '\n';
    }
    if(Cx != -1)
    {
        cout << N / Cx << ' ' << N - (N / Cx) << '\n';
    }
        }
    }
}