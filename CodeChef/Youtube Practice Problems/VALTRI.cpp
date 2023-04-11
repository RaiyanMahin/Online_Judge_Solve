#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll n; cin >> n;
    if(n % 5 == 0 or n % 6 == 0 or n % 30 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}


