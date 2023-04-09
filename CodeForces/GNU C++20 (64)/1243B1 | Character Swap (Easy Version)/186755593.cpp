#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
 
void baal()
{
    ll n; cin >> n; string s, t; cin >> s >> t; ll c = 0, indx = 0;
    ll pos[n + 1] = {0};
    for(ll i = 0; i < n; i++)
    {
        if(s[i] != t[i])
        {
            c++;
            pos[indx++] = i;
 
        }
    }
    if(c != 2)
    {
        cout << "NO\n"; return;
    }
    ll indx1 = pos[0], indx2 = pos[1];
    swap( s[indx1], t[indx2]  );
    if(s == t)
    {
        cout << "YES\n"; return;
 
    }
    cout << "NO\n"; return;
 
 
 
 
 
 
    return;
 
}
 
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        baal();
    }
}
 