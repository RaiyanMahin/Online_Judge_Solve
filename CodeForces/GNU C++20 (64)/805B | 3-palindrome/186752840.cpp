/// abar mon chailo :V
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n; cin >> n;
    
    if(n)
    {
         ll cnt = 0;
    string s = "";
    char c = 'a';
    while(true)
    {
        s += c;
        cnt++;
        if(cnt == 2)
        {
            if(c == 'a')
            {
                c = 'b';
                cnt = 0;
            }
            else if(c == 'b')
            {
                c = 'a';
                cnt = 0;
            }
        }
        if(s.size() == n)
        {
            return cout << s ,0;
        }
 
    }
 
 
    }
 
 
}