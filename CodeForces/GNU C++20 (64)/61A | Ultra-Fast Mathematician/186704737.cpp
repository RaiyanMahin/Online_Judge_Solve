#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    string a,b; cin >> a >> b; ll s =a.size();
    for(ll i = 0; i < s; i++)
    {
        if(a[i] == b[i]) cout << 0 ;
        else cout << 1;
    }
}