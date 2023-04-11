#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;

void baal()
{
    ll n; cin >> n; vector < ll > a(n , 0); ll mn = INT_MAX;
    for(auto &i : a)
    {
        cin >> i;
    }
    sort(a.begin(), a.end());
    cout << a[n - 1] << ' ';
    for(ll i = 0; i < n; i++)
    {
        a[i] = (a[i] ^ a[n - 1]);
    }
    ll p = a[0];
    for(ll i = 1; i < n; i++)
    {
        p |= a[i];
    }
    cout << p << endl;



















    return;


}

int main()
{
    ll t; cin >> t;
    while(t--)

    {

        baal();
    }




}

