#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
vector < ll > a;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
       string s , t; cin >> s >> t; ll ans = 0;
       for(ll i = 0; i < s.size(); i++)
       {
           for(ll j = 0; j  < t.size(); j++)
           {
               if(s[i] == t[j])
               {
                   ans = 1;
                   break;
               }
           }
       }
 
       cout << (ans ? "Yes" : "No") << endl;
    }
}