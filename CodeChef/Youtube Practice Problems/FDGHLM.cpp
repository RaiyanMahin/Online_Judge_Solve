#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll a, b; cin >> a >> b;
    cout << __gcd(a, b) << ' ' << (a * b) / __gcd(a, b) << endl;


}


