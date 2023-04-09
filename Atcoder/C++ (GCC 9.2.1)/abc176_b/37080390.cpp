#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    string s; cin >> s;
    ll x = 0LL;
    for(auto i : s)
    {
        ll d = i - '0';
        x += d;
    }
    if(x % 9LL == 0)
        puts("Yes");
    else
        puts("No");

}
