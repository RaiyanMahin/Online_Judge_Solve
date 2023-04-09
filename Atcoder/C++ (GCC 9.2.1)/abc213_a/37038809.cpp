#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;

void baal()
{
    ll a ,b; cin >> a >> b;
    for(ll i = 0; i <= 255; i++)
    {
        ll op = (a ^ i);
        if(op == b)
        {
            cout << i << endl;
            return;
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
