#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
vector < ll > a;
void baal()
{
    a.clear();
    ll n, rest; cin >> n >> rest; string s; cin >> s; ll Rest = rest;
    ll c0 = 0, ok = 0, mx = -INT_MAX;
    for(ll i = 0; i < n; i++)
    {
        if(s[i] == '0')
        {
            c0++;
        }
        else if(s[i] == '1')
        {
            if(c0)
            {
                a.push_back(c0);
                c0 = 0;
            }
        }
    }
    if(c0)
        a.push_back(c0);

    if(a.size() == 0)
    {
        cout << "NO\n"; return;
    }
    sort(a.rbegin(), a.rend());
    if(a[0] >= rest)
    {
        cout << "YES\n"; return;

    }
    ll Baal = rest;
    for(ll i = 0; i < a.size(); i++)
    {
        if(a[i] < Baal)
        {
            Baal = 2* (Baal - a[i]);
            if(Baal > rest)
            {
                Baal = rest;
            }
        }
        else
            ok = 1;

    }

    cout << (ok ? "YES" : "NO") << endl;
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


