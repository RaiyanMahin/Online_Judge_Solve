#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
map < string , ll > mp;
vector < ll > ans;
void baal()
{
    mp.clear(); ans.clear();
    ll n; cin >> n; n *= 3;
    while(n--)
    {
        string s; cin >> s; ll d; cin >> d;
        mp[s] += d;

    }
    for(auto i : mp)
    {
        ans.push_back(i.second);
    }
    sort(ans.begin(), ans.end());
    for(ll i : ans)
        cout << i << ' ';
    cout << endl;



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


