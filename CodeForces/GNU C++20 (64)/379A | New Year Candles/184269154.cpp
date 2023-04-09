#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll a,b; cin >> a >> b; ll cnt = 0;
    for(ll i = 1; i <= a; i++)
    {
        cnt++;
        if(cnt == b)
        {
            cnt = 0;
            a++;
        }
    }
    cout << a;
}