#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    string s; cin >> s;
    ll d = 0;
    for(auto x : s)
    {
        if(x == '7')
        {
            d = 1;
            break;
        }
    }
    if(!d)
        cout << "No\n";
    if(d)
        cout << "Yes\n";
}
