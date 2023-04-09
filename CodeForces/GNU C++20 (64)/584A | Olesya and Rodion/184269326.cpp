#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//typedef push_back pb;
int main()
{
//    ll n; cin >> n; string s; cin >> s; bool v = false;
//    for(ll i = 0; i < s.size(); i++)
//    {
//        if(s[i] == s[i + 1])
//        {
//            cout << "No" << '\n';
//            v = true;
//            break;
//
//        }
//    }
//    if(!v) cout << "Yes" << '\n';
     char a[105]; int b,c; cin >> b >> c;
     if(b == 1 && c == 10)
     {
          cout << -1 << '\n'; return 0;
     }
     if(b != 1 && c == 10)
     {
         for(int i = 0; i < b - 1 ; i++)
         {
             cout << 1 ;
         }
         cout << 0;
         return 0;
     }
     else {
     for(int i = 0; i < b; i++)
     {
         if(c == 2) a[i] = '2';
         if(c == 3) a[i] = '3';
         if(c == 4) a[i] = '4';
         if(c == 5) a[i] = '5';
         if(c == 6) a[i] = '6';
         if(c == 7) a[i] = '7';
         if(c == 8) a[i] = '8';
         if(c == 9) a[i] = '9';
 
 
     }
     for(int i = 0; i < b ; i++)
     {
         cout << a[i] ;
     }
 
 
     }
 
 
 
}