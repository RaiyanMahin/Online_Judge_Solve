#include <bits/stdc++.h>
using  namespace std;
using ll = long long;
int main()
{
    ll n, k; cin >> n >> k;
    string s = "";
    char c = 'a';
    ll cnt = 0;
    while(1)
    {
        s += c;
        cnt++;
        c++;
        if(cnt == k)
        {
            cnt = 0;
            c = 'a';
        }
        if(s.size() == n)
        {
            return cout << s ,0;
        }
    }
}