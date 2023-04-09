#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ld = long double;
vector < ll > v;
void pre()
{
    for(ll i = 1; i <= 30; i++)
    {
        ld x = pow(2, i);
        v.push_back(x);
 
    }
}
ll n;
 
 
   int main()
   {
       pre();
       ll t; cin >> t;
       while(t--)
       {
            cin >> n;
            ll d = ( n / 2) - 1 , dd = 0;
            ll ss = accumulate(v.begin(), v.begin() + d , 0);
            ss += v[n - 1];
            for(ll i = d; i < (n - 1); i++)
            {
                dd += v[i];
            }
            cout << ss - dd << '\n';
 
       }
   }
 