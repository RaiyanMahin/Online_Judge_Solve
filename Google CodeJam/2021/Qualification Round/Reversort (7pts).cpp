#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200];
int main()
{
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        for(ll i = 0; i < 200; i++) a[i] = 0;
        ll n; cin >> n; 
        ll ans = 0, indx = -1 , mn = 1e18;
        for(ll i = 1; i <= n; i++)
        {
            cin >> a[i];


        }
        ll i , j;
        for(i = 1; i <= (n - 1); i++)
        {
            mn = 1e18;
            for(j = i; j <= n; j++)
            {
                if(mn > a[j])
                {
                    mn = a[j];
                    indx = j;
                }
            }
         //   cout << " id " << indx << endl;
            ans += abs(indx - i + 1);
            reverse(a + i, a + indx + 1);
          //   cout << " ans " <<  ans << endl;
//           ll st = i, en = indx;
//           while(st < en)
//           {
//               ll op = a[st];
//               a[st] = a[en];
//               a[en] = op;
//               st++;
//               en--;
//           }

        }






        cout << "Case" << ' ' << "#" << r++ << ": " << ans << '\n';

    }
}
