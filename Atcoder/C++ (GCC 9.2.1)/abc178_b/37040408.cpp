#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll a ,b, c,d; cin >> a >> b >> c >> d;
    ll x = a * c , y = a * d , z = b * c , k =  b * d;
    cout << max4(x, y, z, k);
    
}
   