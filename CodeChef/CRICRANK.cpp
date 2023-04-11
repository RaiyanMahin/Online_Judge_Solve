#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug(x) cerr << # x << ' ' << x << endl;
void baal()
{
    ll a, b, c, x,y,z; cin >> a >> b >> c >> x >> y >> z;
    ll s1 = 0, s2 = 0;
    if(a > x)
        s1++;
    if(a < x)
        s2++;

    if(b > y)
        s1++;

    if(b < y)
        s2++;

    if(c > z)
        s1++;

    if(c < z)
        s2++;

    if(s1 > s2)
    {
        cout << "A\n"; return;
    }
    else
    {
         cout << "B\n"; return;

    }





}

int main()
{
    ll t; cin >> t;

    while(t--)

    {

        baal();
    }




}



