#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
   string s; cin >> s; ll x; cin >> x; ll d = s.size();
   if(x > d)
   {
       return cout << "impossible\n" , 0;
   }
   if(x <= d)
   {
       set < char > st;
       for(auto i : s)
       {
           st.insert(i);
       }
       ll z = st.size();
       if(z >= x)
       {
           return cout << 0 , 0;
           
       }
       if(z < x)
       {
           
           return cout << x - z , 0;
           
       }
       st.clear();
       
 
   }
 
}