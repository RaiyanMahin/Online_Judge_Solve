#include <bits/stdc++.h>
using namespace std;
using ll = double;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    while(t--)
    {
         ll a, b, c,d; cin >> a >> b >> c >> d;
         cout <<  fixed << setprecision(15) << (a * d + b * c) / (b + d);
        

    }

}
