#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
 
void baal()
{
    ll n, k; cin >> n >> k;
    if(n == k)
    {
        cout << "1\n"; return;
    }
    if(n < k)
    {
        if(k % n == 0)
        {
            cout << (k / n) << endl; return;
 
        }
        else
        {
            cout << (k / n ) + 1 << endl;  return;
        }
 
    }
    if(n > k)
    {
 
        if(n % k == 0)
        {
            cout << "1\n"; return;
        }
        else
        {
            cout << "2\n"; return;
//            ll vag = (n / k), rem = (n % k);
//            if(rem == 1)
//            {
//                cout << "2\n"; return;
//            }
//            else
//            {
//                cout << rem << endl; return;
//            }
 
 
        }
 
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return;
 
}
 
 
int main()
{
    ll t; cin >> t;
    while(t--)
        baal();
}