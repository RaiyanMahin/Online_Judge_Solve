#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll t; cin >> t;
    while(t--)
    {
        vector < ll > a(5, 0);
        for(auto &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        cout << a[2] << endl;
    }


}


