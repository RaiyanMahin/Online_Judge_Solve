#include "bits/stdc++.h"
using namespace std;
int main(int argc, char const *argv[])
{
   set<char>rm;
   string s; cin >> s; int a = s.size();
   for(int i = 0; i < a; i++)
   {
       rm.insert(s[i]);
   }
   int d = rm.size();
   cout << ((d % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!" );
   cout << '\n';
 
 
}