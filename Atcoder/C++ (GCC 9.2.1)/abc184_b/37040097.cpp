#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n , x; cin >> n >> x; string s; cin >> s;
    for(ll i = 0; i < s.size(); i++)
    {
        if(s[i] == 'o')
        {
            x++;


        }
        else if(s[i] == 'x')
        {
            if(x)
            {
                x--;
            }
        }
    }
    cout << x;
}



