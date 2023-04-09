#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n, a,b,c,d; cin >> n >> a >> b  >> c >> d;
        if( (  n * (a - b) > (c + d) ) or ( n * (a + b) < (c - d)  )  )
            cout << "No\n";
        else
            cout << "Yes\n";
      
 
    }
}