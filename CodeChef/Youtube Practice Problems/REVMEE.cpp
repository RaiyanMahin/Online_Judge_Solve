#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll n; cin >> n; vector < ll > a(n , 0);
    for(auto &i : a)
        cin >> i;
    for(ll i = a.size() - 1; i >= 0; i--)
        cout << a[i] << ' ';


}


