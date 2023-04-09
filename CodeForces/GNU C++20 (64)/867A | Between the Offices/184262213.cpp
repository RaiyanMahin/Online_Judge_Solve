#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
using ll = long long;
int main()
{
    ll n; cin >> n;
    string s; cin >> s; ll a = 0 , b = 0;
    for(ll i = 0; i < s.size() ; i++)
    {
        if(s[i] == 'S' and  s[i + 1] == 'F')
            a++;
         if(s[i] == 'F' and  s[i + 1] == 'S')
            b++;
    }
    if(a > b)
        cout << "yes\n";
    if(a <= b)
        cout << "no\n";
}