#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll n; cin >> n;
    if(n % 100 == 0)
    {
        cout << 100;
        return 0;
    }
    else
    {
        ll p = n / 100;
        p++;
        p = p * 100;
        cout << abs(p - n);
        return 0;

    }







}
