#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
// 1800++

vector < ll > odd, eve, ans;

int main()
{
    ll t; cin >> t;
    while(t--)
    {
       odd.clear(); eve.clear(); ans.clear();
       ll n; cin >> n;
       while(n--)
       {
           ll x; cin >> x;
           if(x & 1)
           {
               odd.push_back(x);
           }
           if(x % 2 == 0)
           {
               eve.push_back(x);
           }
       }

       // for(; i<n ; j<n , i+=2 , j+=2){
       ll oddsize = odd.size(), evensize = eve.size();
       if(odd.size() == 0)
       {
           for(ll i = 0; i < eve.size(); i++)
            cout << eve[i] << ' ';
           cout << endl;
       }
       else if(eve.size() == 0)
       {
           for(ll i = 0; i < odd.size(); i++)
            cout << odd[i] << ' ';
           cout << endl;
       }
       else if(eve.size() and odd.size())
       {
           for(ll i = 0; i < eve.size(); i++)
           {
               cout << eve[i] << ' ';
           }
           for(ll i = 0; i < odd.size(); i++)
           {
               cout << odd[i] << ' ';
           }
           cout << endl;


       }





    }
}


