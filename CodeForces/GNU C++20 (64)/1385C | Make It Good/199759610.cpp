#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); //cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
       
        ll n; cin >> n; vector < ll > a(n + 1, 0);
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll L = 0, R = 0;
        for(ll i = n - 1; i >= 1; i--)
        {
            if(a[i] > a[i - 1])
            {
                L = i;
                break;
            }
        }
        for(ll i = L; i >= 1; i--)
        {
            if(a[i] < a[i - 1] )
            {
                R = i;
                break;
            }
 
        }
        cout << R << endl;
        a.clear();
 
 
    }
 
 
}
 