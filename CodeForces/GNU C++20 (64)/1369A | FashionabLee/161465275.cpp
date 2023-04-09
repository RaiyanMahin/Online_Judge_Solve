#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void Y()
{
    cout << "YES\n";
}
void N()
{
    cout << "NO\n";
}
int main()
{
    ll t ; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
       if(n % 4 == 0)
            Y();
        else
            N();
 
 
    }
}
 
 