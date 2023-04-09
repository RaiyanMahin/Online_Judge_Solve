#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nn "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
       ll n; cin >> n; string b; cin >> b;
       string a = "";
       ll cur = 0;
       for(ll i = 0; i < n; i++)
       {
           if(b[i] == '1')
           {
               if(cur == 0 or cur == 1)
               {
                   a += '1';
                   cur = 2;
               }
               else if(cur == 2)
               {
                   a += '0';
                   cur = 1;
               }
           }
           else if(b[i] == '0')
           {
               if(cur == 1)
               {
                   a += '0';
                   cur = 0;
               }
               else if(cur == 2 or cur == 0)
               {
                   a += '1';
                   cur = 1;
               }
           }
 
 
 
 
       }
       cout << a << endl;
 
 
 
 
    }
}