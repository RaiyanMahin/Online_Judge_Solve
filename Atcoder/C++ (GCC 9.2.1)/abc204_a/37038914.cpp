#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
int main()
{
    ll a, b; cin >> a >> b;
    if(a == b)
        cout << a << endl;
    if(a != b)
    {
        if(a == 0 and b == 1)
            cout << "2\n";
        if(a == 1 and b == 0)
            cout << "2\n";
        if(a == 0 and b == 2)
            cout << "1\n";
        if(a == 2 and b == 0)
            cout << "1\n";
        if(a == 2 and b == 1)
            cout << "0\n";
        if(a == 1 and b == 2)
            cout << "0\n";
    }





}
