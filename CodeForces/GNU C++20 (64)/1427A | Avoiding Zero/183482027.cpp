#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
vector < ll > Minus, Plus;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        Minus.clear(); Plus.clear();
        ll n; cin >> n; vector < ll > a(n , 0); ll s = 0, c = 0, pos = 0, neg = 0;
        for(auto &i : a)
        {
            cin >> i; s += i;
            if(i == 0)
            {
                c++;
            }
            if(i > 0)
            {
                pos += i;
                Plus.push_back(i);
 
            }
            if(i < 0)
            {
                neg += i;
                Minus.push_back(i);
            }
 
        }
        if(s == 0)
        {
            cout << "NO\n";
        }
        if(s)
        {
            cout << "YES\n";
            ll abs_neg = abs(neg);
            if(pos > abs_neg)
            {
                for(ll i : Plus)
                    cout << i << ' ';
 
                if(c)
                {
                    for(ll i = 1; i <= c; i++)
                        cout << 0 << ' ';
                }
                for(ll i : Minus)
                    cout << i << ' ';
                cout << endl;
            }
            else
            {
                for(ll i : Minus)
                    cout << i << ' ';
 
                if(c)
                {
                    for(ll i = 1; i <= c; i++)
                        cout << 0 << ' ';
                }
                for(ll i : Plus)
                    cout << i << ' ';
                cout << endl;
 
            }
        }
 
 
 
 
 
 
 
 
 
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}