#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll d ,t, v; cin >> d >> t >> v;
    ll p = v * t;
    if(p >= d)
        cout << "Yes\n";
    else
    {
        cout << "No\n";
    }
}
