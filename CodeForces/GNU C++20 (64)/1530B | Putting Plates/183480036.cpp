#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
vector < string > vs;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
       vs.clear();
       ll rw, cl; cin >> rw >> cl;
       for(ll i = 1; i <= rw; i++)
       {
           string ss(cl, '0');
 
               if(i == 1 or i == rw)
               {
                   for(ll i = 0; i < cl; i += 2)
                   {
                       ss[i] = '1';
                   }
                   vs.push_back(ss);
               }
               else if(i == (rw - 1))
               {
                   vs.push_back(ss);
               }
               else if(i != 1 and i != rw)
               {
                   if(i % 2 == 0)
                   {
                       vs.push_back(ss);
                   }
                   if(i & 1)
                   {
                       ss[0] = '1', ss[cl - 1] = '1';
                       vs.push_back(ss);
 
                   }
               }
 
 
 
 
       }
       for(auto i : vs)
       {
           cout << i;
           cout << endl;
       }
       cout << endl;
 
 
 
 
 
 
 
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}