#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t; cin >> t;
    while(t--)
    {
       string s ,s1 = ""; cin >> s;
       ll d = s.size();
       if(d == 2)
       {
           cout << s << '\n';
       }
       if(d > 2)
       {
           ll ans = s.size() / 2; ans += 1;
           set < char > st;
           for(auto i : s)
           {
               st.insert(i);
           }
           if(st.size() == 1)
           {
               for(ll i = 1; i <= ans; i++)
               {
                   cout << s[0];
               }
               cout << '\n';
               st.clear();
           }
           if(st.size() > 1)
           {
               for(ll i = 0; i < s.size() - 1 ; i += 2)
               {
                   s1 += s[i];
               }
               s1 += s[s.size() - 1];
               cout << s1 << '\n';
 
 
           }
 
 
 
       }
 
 
 
    }
}