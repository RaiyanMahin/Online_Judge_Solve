#include <bits/stdc++.h>
#define ll long double
 
using namespace std;
 
void baal()
{
    ll n; cin >> n;
    if(n >= -128 and n <= 127)
    {
        cout << "byte\n";
        return;
    }
    if(n >= -32768 and n <= 32767)
    {
        cout << "short\n";
        return;
    }
    if( n >= -2147483648 and n <= 2147483647 )
    {
        cout << "int\n";
        return;
    }
    if( n >= -9223372036854775808 and n <= 9223372036854775807  )
    {
        cout << "long\n";
        return;
    }
    else
    {
        cout << "BigInteger\n";
        return;
    }
 
 
}
 
int main()
{
 
    ll t = 1;
    while(t--)
    {
       baal();
 
    }
 
}