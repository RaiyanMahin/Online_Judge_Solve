#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
#define MOD 1000000007
 
vector < ll > a, pref;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        a.clear(); pref.clear();
        ll s = 0;
        ll n , x; cin >> n >> x;
        for(ll i = 1; i <= n; i++)
        {
            ll c; cin >> c; a.push_back(c);
 
        }
        sort(a.begin(), a.end());
        for(ll i = 0; i < a.size(); i++)
        {
            s += a[i];
            pref.push_back(s);
        }
        if(x == pref[pref.size() - 1])
        {
            cout << "NO\n";
        }
        else
        {
            for(ll i = 0; i < pref.size(); i++)
        {
            if(pref[i] == x)
            {
                swap(a[i] , a[i + 1]);
            }
        }
        cout << "YES\n";
        for(ll i : a)
            cout << i << ' ';
        cout << endl;
        }
 
 
 
 
 
 
    }
 
 
}
 