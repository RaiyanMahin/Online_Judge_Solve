#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll n; cin >> n; n /= 10;
    n = n % 10;
    cout << (n == 7 ? "1" : "0") << endl;
//    while(n)
//    {
//        n = n % 10;
//        cout << n << endl;
//        n /= 10;
//
//    }
}



