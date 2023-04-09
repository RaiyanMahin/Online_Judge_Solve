#include <bits/stdc++.h>
using namespace std;
using ll =  long long;
vector < ll > a;
int main()
{
     ll k; cin >> k;
 
     for(ll i = 0; i < 12; i++)
     {
         ll x; cin >> x; a.push_back(x);
     }
     sort(a.rbegin(), a.rend());
     ll cnt = 0, s = 0, baal = 0;
     if(!k)
        cout << 0;
     if(k)
     {
         for(ll i = 0; i < a.size(); i++)
         {
             s += a[i];
             cnt++;
             if(s >= k)
             {
                 baal = 1;
                 return cout << cnt , 0;
                 
             }
 
         }
         if(!baal)
            cout << -1;
         
     }
}