#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    string s = "", t = ""; cin >> s >> t; ll x = s.size(), y = t.size() , i = x - 1, j = y - 1 , c = 0;
    while(i >= 0 and j >= 0 and s[i] == t[j])
    {
        c++ , i--; j--;
    }
    cout << (x + y - (2 * c));
 
}