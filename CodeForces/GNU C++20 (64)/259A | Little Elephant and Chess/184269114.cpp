#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
     ll n = 8;
     ll d = 0;
     while(n--)
     {
         string s; cin >> s;
         for(ll i = 0; i < s.size(); i++)
         {
             if( s[i] == s[i + 1] )
             {
                 d = 1;
             }
         }
     }
     if(d)
     {
         cout << "NO\n";
     }
     if(!d)
     {
         cout << "YES\n";
     }
}