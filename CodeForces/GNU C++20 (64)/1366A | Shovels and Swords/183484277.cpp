#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
 
void baal()
{
    ll a, b; cin >> a >> b;
    if(!a or !b)
    {
        cout << "0\n"; return;
    }
    else if(a == b)
    {
        cout << (a + b) / 3 << endl; return;
    }
    ll mx = max(a, b), mn = min(a, b);
    if( ( mx / 2 ) > mn )
    {
        cout << mn << endl; return;
 
    }
    if( ( mx / 2 ) <= mn )
    {
 
        cout << ( mx + mn ) / 3 << endl; return;
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return;
 
}
 
 
 
int main()
{
    ll t; cin >> t;
    while(t--)
        baal();
}