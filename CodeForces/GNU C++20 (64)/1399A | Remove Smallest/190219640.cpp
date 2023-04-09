#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 1] = {0};
        int c = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = 0; i < n; i++)
        {
            int x = a[i + 1] - a[i];
            if(x > 1)
            {
                c = 1;
                break;
            }
        }
        if(c)
        {
            cout << "NO\n";
 
        }
        if(c == 0)
        {
            cout << "YES\n";
        }
 
 
 
 
    }
 
}