#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//https://codeforces.com/problemset/problem/1139/A
ll chh(string cc)
{
    set < char > ss;
    for(auto i : cc)
        ss.insert(i);
    if(ss.size() > 1)
        return 1;
    if(ss.size() == 1)
        return -1;
}
ll ch(string c)
{
    string x = c;
    reverse(x.begin() , x.end());
    if(x != c)
        return 1;
    if(x == c)
        return -1;
}
int main()
{
   string s, s1; cin >> s; s1 = s;
   reverse(s1.begin() , s1.end());
   if(s1 != s)
        cout << s.size();
   if(s1 == s)
   {
       ll bb = chh(s);
       if(bb == -1)
       {
           return cout << 0, 0;
       }
       ll i = 1, j = 0;
       ll d = -1 , dd = 0;
       while(d != 1 and !dd)
       {
          string ss =  s.erase(j,i);
          if(ss.size() == 1)
          {
              dd = 1;
              cout << 0 << '\n';
              break;
          }
          ll d = ch(ss);
          if(d == 1)
          {
              cout << ss.size() << '\n';
              break;
          }
          i++;
 
 
       }
   }
 
}