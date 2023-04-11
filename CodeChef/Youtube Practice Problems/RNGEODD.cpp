#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    ll L , R; cin >> L >> R;
    if(L & 1)
    {
        cout << L << ' ';
        for(ll i = L + 2; i <= R; i += 2)
            cout << i << ' ';

        return 0;
    }
    cout << L + 1 << ' ';
        for(ll i = L + 3; i <= R; i += 2)
            cout << i << ' ';

        return 0;


}



