#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n,k; cin >> n >>k;
    if(n == k)
        cout << 0 << '\n';
    if(n < k)
    {
        ll z = abs(n - k);
        cout << min(n,z) << '\n';
    }
    if(n > k)
    {
        ll d = n % k;
        ll D = n / k;
        if(d == 0)
            cout << 0 << '\n';
        if(d != 0)
        {
            cout << abs(d - k) << '\n';
        }



    }


}
