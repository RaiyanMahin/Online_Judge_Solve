#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    char a, b, c; cin >> a >>  b >> c;
    if(a == b and b == c and c == a)
    {
        cout <<  "Won" << endl;
    }
    else
    {
        cout <<  "Lost" << endl;
    }
}