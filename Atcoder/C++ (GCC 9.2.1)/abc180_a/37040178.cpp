#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll n ,a ,b; cin >> n >> a >> b;
    ll p = n;
    p -= a;
    p += b;
    cout << p;
}
