#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;

void baal()
{
    ll n ,d, h; cin >> n >> d >> h; vector < ll > a(n , 0);
    ll s = 0;
    for(auto &i : a)
    {
        cin >> i;
    }
    ll bo = 0;
    for(ll i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            s += a[i];
            if(s > h)
            {
                bo = 1;
                break;

            }
        }
        if(a[i] == 0)
        {
            if(s < d)
            {
                s = 0;
            }
            if(s >= d)
            {
                s -= d;
            }
        }
    }
    cout << (bo ? "YES" : "NO") << endl;












    return;









}

int main()
{
    ll t; cin >> t;
    while(t--)
        baal();
}

