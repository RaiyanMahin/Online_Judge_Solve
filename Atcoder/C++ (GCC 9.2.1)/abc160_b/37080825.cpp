#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll x; cin >> x; ll cnt = 0;
    if(x >= 500)
    {
        ll d = x / 500;
        cnt += d * 1000;
        x -= d * 500;
    }
    //cout << x;
    if(x >= 5)
    {
        ll d = x / 5;
        cnt += d * 5;
        x -= cnt;

    }
    cout << cnt << '\n';



}
