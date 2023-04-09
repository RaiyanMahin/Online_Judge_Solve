#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
 
void baal()
{
    ll n; cin >> n; vector < ll > a(n , 0);
    for(auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    ll q; cin >> q;
    while(q--)
    {
        ll p; cin >> p;
        if(p < a[0])
            cout << "0\n";
        if(p >= a[0])
        {
            auto it = upper_bound(a.begin(), a.end(), p);
            cout << it - a.begin() << endl;
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