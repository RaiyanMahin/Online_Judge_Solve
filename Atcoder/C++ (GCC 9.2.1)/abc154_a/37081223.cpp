
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    string a,b,C; cin >> a >> b;
    ll c,d; cin >> c >> d;
    cin >> C;
    if(C == a)
    {
        cout << c - 1 << ' ' << d;
    }
    if(C == b)
    {
        cout << c << ' ' << d - 1;
    }
     

}

