#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void b1()
{
    cout << "No\n";
}
void b2()
{
    cout << "Yes\n";
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
 
        ll n, k ; cin >> n >> k; ll od = 0,  ev = 0, s = 0;
        for(ll i = 0; i < n; i++)
        {
            ll X; cin >> X; s += X;
            if(X & 1)
            {
                od++;
            }
            else
            {
                ev++;
            }
        }
        if(!od)
        {
            b1();
        }
        else if(k == n)
            {
                if(s & 1)
                {
                    b2();
                }
                else
                {
                    b1();
                }
            }
        else if(od == n)
        {
            if(k & 1)
            {
                b2();
            }
            else
            
            {
                b1();
            }
        }
        else if(ev == n)
        {
            b1();
        }
        else
        {
            b2();
            
 
 
 
        }
 
 
    }
}