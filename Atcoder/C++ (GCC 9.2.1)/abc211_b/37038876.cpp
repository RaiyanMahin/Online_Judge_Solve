#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
   vector < string > s1, s2;
   s1.push_back("HR"); s1.push_back("3B"); s1.push_back("2B"); s1.push_back("H");
   sort(s1.begin(), s1.end());
   ll n =4;
   while(n--)
   {
       string d; cin >>d;
       s2.push_back(d);
   }
   sort(s2.begin(), s2.end());
   if(s1 == s2)
    {
        cout << "Yes\n"; return 0;
    }
    else
    {
        cout << "No\n";
    }



}
