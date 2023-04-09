#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
 
void baal()
{
 // 9 : 06 pm
    ll l ,r; cin >> l >> r;
 
    ll op = (r / 2) + 1;
    if(op > l)
        cout << r % op << endl;
    else
        cout << r % l << endl;
//    for(ll i = l; i < r; i++)
//    {
//
//        cout << r % i << ' ';  debug(i);
//    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return;
 
}
 
int main()
{
    ll t; scanf("%lld", &t);
    while(t--)
        baal();
}