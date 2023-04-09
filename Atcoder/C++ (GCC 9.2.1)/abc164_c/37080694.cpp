#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
   set < string > st;
   string s;
   ll n; cin >> n;
   while(n--)
   {
       cin >> s;
       st.insert(s);
       
   }
   cout << st.size();
}

