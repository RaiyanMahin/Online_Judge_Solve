#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c; cin >> a >> b >> c;
    int s = a + b + c;
    if(s >= 22) cout << "bust" << '\n';
    else cout << "win" << '\n';
}