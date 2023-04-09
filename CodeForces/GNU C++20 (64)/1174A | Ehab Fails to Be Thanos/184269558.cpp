#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int n,m,k; cin >> n;  m = n * 2; int a[m + 10]; int b[n + 10] , c[ n + 10];
    for(int i = 0; i < m; i++) cin >> a[i];
    sort(a, a + m);
    int s1 = 0, s2 = 0;
    for(int k = 0; k < n; k++)
    {
       b[k] = a[k];
       s1 += b[k];
    }
    for(int d = 0, z = n; z < m && d < n ; z++, d++)
    {
        c[d]= a[z];
        s2 += c[d];
    }
    //cout << s1 << ' ' << s2 << '\n';
    if(s1 == s2)
    {
        cout << -1 << '\n';
    }
    else {
        for(int i = 0; i < m; i++)
        {
            cout << a[i] << ' ';
        }
    }
    s1 = 0, s2 = 0;
 
 
}