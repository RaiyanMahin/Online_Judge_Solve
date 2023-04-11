#include <bits/stdc++.h>
using ll = long long;
using namespace std;
vector < ll > a;
int main()
{
    ll t;  cin >> t;
    for(ll i = 1; i <= t; i++)
    {
        a.clear();
        
        ll n; cin >> n;
        for(ll i = 0; i < n; i++)
        {
            ll p; cin >> p; a.push_back(p);
            
        }
        a.push_back(-1);
        ll mx = -1e7, cnt = 0;
        
        
            for(ll i = 0; i < a.size() - 1; i++)
            {
                if(a[i] > mx && a[i] > a[i + 1])
                {
                    cnt++;
                    

                }
                mx = max(mx, a[i]);
            }


        cout << "Case " << "#" << i << ": " << cnt << '\n';
        


    }
}
// cout << "Case " << "#" << i << ": " << cnt << '\n';
