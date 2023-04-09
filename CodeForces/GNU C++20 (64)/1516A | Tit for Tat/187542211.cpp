#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n , k; cin >> n >> k; vector < ll > a(n , 0);
        ll s = 0, cnt = 0;
        for(auto &i : a)
            cin >> i;
        for(ll i = 0; i < a.size() - 1 and k; i++)
        {
            ll o = a[i] - 0;
            if(k >= o and k)
            {
                a[i] = 0;
                k -= o;
                s += o;
            }
            else if(k < o and k)
            {
                ll j =  a[i] - k;
                k -= (a[i] - j);
                s += (a[i] - j);
                a[i] = j;
 
 
 
 
            }
 
        }
        a[a.size() - 1] += s;
        for(ll i : a)
            cout << i << ' ';
        cout << endl;
 
 
    }
}