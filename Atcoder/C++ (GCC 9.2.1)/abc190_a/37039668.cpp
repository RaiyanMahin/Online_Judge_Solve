#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll a , b , c; cin >> a >> b >> c;
    if(c == 0)
    {
        if(a <= b)
            return cout << "Aoki\n" , 0;
        if(a > b)
        {
            return cout << "Takahashi\n" , 0;
        }


    }
   if(c == 1)
    {
        if(a < b)
            return cout << "Aoki\n" , 0;
        if(a >= b)
        {
            return cout << "Takahashi\n" , 0;
        }


    }
}



