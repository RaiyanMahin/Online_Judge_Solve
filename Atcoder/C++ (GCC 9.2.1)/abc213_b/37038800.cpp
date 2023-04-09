#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;

void baal()
{
    ll n; cin >> n; vector < ll > a(n , 0);
    for(auto &i : a)
        cin >> i;
    vector < ll > b = a;
    sort(b.begin(), b.end());
    ll p = b[b.size() - 2];
    for(ll i = 0 ; i < n; i++)
    {
        if(a[i] == p)
        {
            cout << i + 1 << endl;
            return;
        }
    }














    return;









}

int main()
{
    ll t = 1; //cin >> t;
    while(t--)
        baal();
}
