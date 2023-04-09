#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n; cin >> n;
    ll a[n] , b[n];
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
 
    }
    ll f = 0;
    for(ll i = 0; i < n; i++)
    {
        if(a[i] - b[i] != 0)
        {
            f = 1;
            break;
        }
 
    }
    if(f)
    {
        return cout << "rated\n" , 0;
    }
    if(!f)
    {
        ll ss = 0;
        for(ll i = 0; i < n - 1; i++)
        {
            if(a[i] < a[i + 1] )
            {
                ss = 1;
                break;
            }
        }
        if(ss)
            return cout << "unrated\n" , 0;
        if(!ss)
            return cout << "maybe\n" , 0;
    }
}