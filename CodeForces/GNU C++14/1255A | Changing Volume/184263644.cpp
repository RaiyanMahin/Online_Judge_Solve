 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
int main()
{
    int t; cin >> t;
 
    for(int i = 1; i <= t; i++)
    {
        ll a,b,d,g,c = 0;  cin >> a >> b;
        ll cnt = 0;
        ll f = abs(a-b);
        cnt = f / 5;
        d = f % 5;
        if(d == 1 || d == 2)
        {
            cnt++;
 
        }
        else if(d == 3 || d == 4)
        {
            cnt = cnt + 2;
 
        }
        cout << cnt << '\n';
        cnt = 0;
 
    }
 
}