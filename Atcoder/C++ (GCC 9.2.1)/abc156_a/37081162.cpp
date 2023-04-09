
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n,r; cin >> n >> r;
    if(n <= 10)
    {
       ll d = 100 * (10 - n);
       cout << d + r << '\n';
    }
    else cout << r << '\n';
}
