#include <bits/stdc++.h>
using namespace std;
using ll =  long long;
int main()
{
    ll a,b,c,d,X;
    cin >> a >> b >> c >> d >> X;
    ll cnt = 0;
    for(ll i = 1; i <= X; i++)
    {
        if(i % a != 0 and i % b != 0 and i % c != 0 and i % d != 0)
            cnt++;
    }
    cout << X - cnt;
}