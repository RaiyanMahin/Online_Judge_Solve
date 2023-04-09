#include <bits/stdc++.h>
//using ll = long long;
//using ld = double;
using namespace std;
int main()
{
    int n; cin >> n; double s = 0.0;
    for(int i = n; i > 0; i--)
    {
        s += (1.0 / i);
    }
    cout << fixed << setprecision(12) << s << '\n';
 
}