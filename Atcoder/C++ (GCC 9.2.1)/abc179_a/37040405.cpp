#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    string s; cin >> s;
    if(s[s.size() - 1] == 's')
        cout << s  << "es";
    else
        cout << s << 's';
}
