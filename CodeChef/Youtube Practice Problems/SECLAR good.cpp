#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll a, b, c; cin >> a >> b >> c;
    cout << (a + b + c) - max({a, b, c}) - min({a, b, c}) << endl;


}



