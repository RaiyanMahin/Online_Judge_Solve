#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll a[3]; cin >> a[0] >> a[1] >> a[2];
        sort(a , a + 3);
        if(a[0] + a[1] + 1 <  a[2])
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}