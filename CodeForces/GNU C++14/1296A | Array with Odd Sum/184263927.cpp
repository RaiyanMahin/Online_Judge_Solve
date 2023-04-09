#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t , n , o = 0, e = 0; cin >> t;
    for(int j = 1; j <= t; j++)
    {
        cin >> n;
        vector<int>r(n);
        for(int i = 0; i < n; i++)
        {
            cin >> r[i];
            if(r[i] % 2) o++;
            else e++;
 
        }
        if(e == n || (o == n && n % 2 == 0 )) cout << "NO" << '\n';
        else cout << "YES" << '\n';
        o = 0, e = 0;
 
    }
}