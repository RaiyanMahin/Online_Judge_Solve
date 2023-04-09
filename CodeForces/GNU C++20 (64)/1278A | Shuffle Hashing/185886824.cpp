#include <bits/stdc++.h>
#define ll long long
using namespace std;
string a ,b;
ll ch(string a1 , string a2)
{
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
    if(a1 == a2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
 
 
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        cin >> a >> b;
        ll x = a.size();
        if(b.size() < a.size())
        {
            cout << "NO\n";
        }
        ll po = 0;
        if(b.size() >= a.size())
        {
            for(ll i = 0; i < b.size(); i++)
            {
                string sun = b.substr(i , x);
                if(sun.size() == a.size())
                {
                    ll cc = ch(sun , a);
                if(cc == 1)
                {
                    po = 1;
                }
                    
                }
                
 
            }
            cout << (po == 1 ? "YES\n" : "NO\n");
        }
 
    }
 
 
 
 
}