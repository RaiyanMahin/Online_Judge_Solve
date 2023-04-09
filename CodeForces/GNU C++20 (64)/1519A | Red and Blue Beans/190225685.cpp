//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
//ll a[2][1002];
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll x, y , z; cin >> x >> y >> z;
        ll op = min(x ,y);
        ll op2 = max(x , y);
        ll m = (1 + z);
        m *= op;
        if(m >= op2)
            cout << "YES\n";
        else
            cout << "NO\n";
 
 
 
 
 
 
 
 
 
 
 
    }
 
}