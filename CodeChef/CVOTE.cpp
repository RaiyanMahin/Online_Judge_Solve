#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

void baal()
{
   map < string, string > mp;
   map < string , ll > mp2, mp3;
   // map < char , int , greater < int > > mp;
   ll n , m; cin >> n >> m;
   while(n--)
   {
       string s1, s2; cin >> s1 >> s2;
       mp[s1] = s2;
   }
   while(m--)
   {
       string s; cin >> s; mp3[s]++;
       string ache = mp[s];
       mp2[ache]++;

   }
   //cout << " mp2 \n";
   ll mx1 = -1, mx2 = -1;
   for(auto i : mp2)
   {
       mx1 = max(mx1, i.second);

   }
   //cout << " mp3 \n";
   for(auto i : mp3)
   {
       mx2 = max(mx2, i.second);
   }
   for(auto i : mp2)
   {
       if(mx1 == i.second)
       {
           cout << i.first << endl;
           break;
       }
   }
   for(auto i : mp3)
   {
       if(mx2 == i.second)
       {
           cout << i.first << endl;
           break;
       }
   }
   return;



}
int main()
{
    ll t = 1;
    while(t--)
    {
        baal();














    }
}

