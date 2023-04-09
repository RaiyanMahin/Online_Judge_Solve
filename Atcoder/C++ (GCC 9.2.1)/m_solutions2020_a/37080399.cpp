#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define debug(x) cout << "eta --- > " <<  x << '\n'
int main()
{

    ll n; cin >> n;
    if(n >= 400 && n <= 599)
    {
        cout << "8\n";
    }
    if(n >= 600 && n <= 799)
    {
        cout << "7\n";
    }
    if(n >= 800 && n <= 999)
    {
        cout << "6\n";
    }
    if(n >= 1000 && n <= 1199)
    {
        cout << "5\n";
    }
    if(n >= 1200 && n <= 1399)
    {
        cout << "4\n";
    }
    if(n >= 1400 && n <= 1599)
    {
        cout << "3\n";
    }
    if(n >= 1600 && n <= 1799)
    {
        cout << "2\n";
    }
    if(n >= 1800 && n <= 1999)
    {
        cout << "1\n";
    }

}
