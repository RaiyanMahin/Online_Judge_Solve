#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c; cin >> a >> b >> c;
    ll ans = 0;
    ans += c * 2;
    if(a == b)
    {
        ans += a;
        ans += b;
       return  cout << ans , 0;
    }
    if(a > b)
    {
        ans += b * 2;
 
 
        return  cout << ans + 1, 0;
        //cout << ans;
 
 
 
    }
    if(a < b)
    {
        ans += a * 2;
 
 
        return  cout << ans + 1 , 0;
       // cout << ans;
 
    }
 
}