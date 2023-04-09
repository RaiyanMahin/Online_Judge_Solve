#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n; cin >> n; ll a[n];
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    if(n == 2)
        return cout << 0 , 0;
    if(n > 2)
    {
        cout << min( a[n - 2] - a[0] , a[n - 1 ] - a[1]  );
 
    }
 
}