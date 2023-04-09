#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int n; cin >> n; int cnt = 0;
    for(int i = 1; i <=n ; i++)
    {
        if(i % 2 != 0) cnt++;
    }
    cout << fixed << setprecision(10) << (double)cnt / n << '\n';
}
