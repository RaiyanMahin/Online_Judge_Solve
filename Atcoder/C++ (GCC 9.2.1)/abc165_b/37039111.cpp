#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll c; cin >> c; ll x = 100, cnt = 0;
    while(true)
    {
        x = x + (x / 100);
        cnt++;
        if(x >= c)
            break;


    }
    cout << cnt;
}






