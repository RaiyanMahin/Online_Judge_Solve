#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n, m; cin >> n >> m;
        if(n % m == 0)
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
}