#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        if(n < 10)
        {
            cout << n << endl;
 
        }
        else if(n > 45)
            cout << "-1\n";
        else
        {
            vector < ll > baal;
            for(ll i = 9; i >= 1; i--)
            {
                if(i <= n)
                {
                    baal.push_back(i);
                    n -= i;
                }
            }
             reverse(baal.begin(), baal.end());
             for(ll i : baal)
                cout << i;
             cout << endl;
        }
 
 
 
 
 
 
    }
 
}