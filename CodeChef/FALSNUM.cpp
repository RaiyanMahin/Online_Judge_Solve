#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
// 1800++



int main()
{
    ll t; cin >> t;
    while(t--)
    {
       string s; cin >> s;
       if(s[0] != '1')
       {
           cout << "1" << s << endl;
       }
       else if(s[0] == '1')
       {
           cout << "10";
           for(ll i = 1; i < s.size(); i++)
            cout << s[i];
           cout << endl;
       }
    }
}



