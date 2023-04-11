#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;

int main()
{
    string s, ss = ""; cin >> s; ss = s;
    reverse(ss.begin(), ss.end());
    if(ss == s)
        cout << "YES\n";
    else
        cout << "NO\n";


}



