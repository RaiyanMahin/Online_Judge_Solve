#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        if(n == 1)
        {
            cout << 0 << '\n';
        }
        if(n > 1)
        {
            ll cnt = 0, pare_na = 0;
            while(n != 1)
            {
                if(n % 2 == 0 && n % 5 != 0 )
                {
                    n = n / 2;
                    cnt++;
 
                }
                if(n % 2 == 0 && n % 5 == 0 )
                {
                    n = n / 2;
                    cnt++;
                }
                if(n % 2 == 0 && n % 3 == 0 )
                {
                    n = n / 2;
                    cnt++;
                }
                if(n % 2 == 0 && n % 3 != 0 )
                {
                    n = n / 2;
                    cnt++;
                }
                if(n % 2 != 0 && n % 5 == 0 )
                {
                    n = (4 * n) / 5;
                    cnt++;
                }
                if(n % 2 != 0 && n % 3 == 0 )
                {
                    n = (2 * n) / 3;
                    cnt++;
                }
                if(n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n != 1)
                {
                    pare_na = 1;
                    break;
 
                }
 
            }
            if(!pare_na)
            {
                cout << cnt << '\n';
                cnt = 0;
            }
            if(pare_na)
            {
                cout << -1 << '\n';
                cnt = 0;
                pare_na = 0;
            }
        }
    }
}