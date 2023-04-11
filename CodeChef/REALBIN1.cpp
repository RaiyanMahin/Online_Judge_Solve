#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
// 1800++

int main()
{
    ll t; cin >> t;
    while(t--)
    {
       ll a, b; scanf("%lld%lld", &a, &b);
       if( (b & (b - 1)) == 0 )
       {
           printf("Yes\n");
       }
       else
       {
           printf("No\n");
       }



    }
}


