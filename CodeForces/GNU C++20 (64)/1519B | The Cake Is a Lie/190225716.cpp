//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
//ll a[2][1002];
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[104][104];
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        for(ll i = 1; i <= 100; i++)
        {
            for(ll j = 1; j <= 100; j++)
            {
                a[i][j] = 0;
            }
        }
        ll n , m , k; cin >> n >> m >> k;
        ll K = n  * m;
        K--;
        if(K == k)
            cout << "YES\n";
        else
            cout << "NO\n";
 
 
 
 
 
 
 
 
 
 
 
    }
 
}