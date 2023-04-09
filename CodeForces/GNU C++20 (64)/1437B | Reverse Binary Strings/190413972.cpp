#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
ll baal()
{
 
   ll n; cin >> n; string s; cin >> s;
   ll c0 = 0, c1 = 0;
   for(ll i = 0; i < n; i++)
   {
       if(s[i] == s[i + 1])
       {
           if(s[i] == '0')
           {
               c0++;
           }
           else
           {
               c1++;
           }
       }
   }
   return max(c1, c0);
}
 
int main()
{
 
    ll t; cin >> t;
    while(t--)
    {
       cout << baal() << endl;
 
    }
 
}