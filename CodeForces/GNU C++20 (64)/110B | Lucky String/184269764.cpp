#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll n; cin >> n;
    string a = "abcd" , b = "abcd";
    for(ll i = 1; i <= 444444; i++)
    {
        a += b;
    }
    for(ll i = 0; i < n; i++)
    {
        printf("%c", a[i]);
    }
 
}