#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n; ll a[n + 1] = {0};
        ll ff = 0, ss = 0, c = 0;
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(ll i = 0; i < n; i++)
        {
            if(a[i] == 1)
            {
                ff = i;
                break;
            }
        }
        for(ll i = n - 1; i >= 0; i--)
        {
            if(a[i] == 1)
            {
                ss = i;
                break;
            }
        }
        for(ll i = ff; i <= ss ; i++)
        {
            if(a[i] == 0)
            {
                c++;
            }
        }
        //cout << ff << ' ' << ss << endl;
        cout << c << endl;
 
 
 
 
 
    }
}