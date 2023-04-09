#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll toInt(string s){ll  sm ; stringstream ss(s); ss >> sm; return sm;}
// sum = (sum + a[i] + MOD) % MOD;
 
void baal()
{
    string s; cin >> s; ll c = 0, sz = (ll)s.size(), mn = (sz / 2) + 1;
    for(char i : s)
    {
        if(i == 'a')
            c++;
    }
    if(c >= mn)
    {
        cout << sz << endl; return;
    }
    else
    {
        cout << (2LL * c) - 1LL << endl; return;
    }
    
    
 
}
 
int main()
{
    ll t = 1;
    while(t--)
    {
        baal();
    }
}
 