#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
 
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll a ,b; cin >> a >> b;
      //  cout << " gcd " <<  __gcd(a, b) << endl;
        if(a == b)
            cout << "0 0\n";
        else
        {
//            if(a % 2 == b % 2 and (a % 2 == 0))
//                cout << __gcd(a, b) << ' ' << 0 << endl;
//            if(a % 2 == b % 2 and a & 1)
//            {
//                cout << abs(a - b) << ' ' << min(a , b) << endl;
//            }
//            if(a % 2 != b % 2)
//            {
                ll x = abs(a - b);
                cout << x << ' ' ;
                cout << min(a % x , x - a % x ) << endl;
                
 
 
            
 
        }
 
 
 
 
 
 
 
 
 
 
 
 
    }
}