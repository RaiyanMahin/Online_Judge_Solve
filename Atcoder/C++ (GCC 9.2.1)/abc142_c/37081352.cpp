#include <bits/stdc++.h>
using ll = long long;
using namespace std;
ll gcd (ll a, ll b)
{
    return b == 0 ? a : gcd(b,a % b);
}
int main()
{
   int n, x; cin >> n; int b[n + 10];
   for(int i = 1; i <= n ; i++)
   {
       cin >> x;
       b[x] = i;
   }
   for(int i = 1; i <= n ;i++)
   {
       cout << b[i] << ' ';
   }

}
