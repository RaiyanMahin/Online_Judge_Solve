#include <bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    int n; cin >> n; int a[n + 10][n + 10], s = 0 , g = (n - 1);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((i == j) ||   ( (i == n / 2) && i != j )|| ( ( j == n / 2 ) && i != j )  ||   ( ( i + j == (g) )  && i != j ) )
            {
                s += a[i][j];
            }
        }
    }
    cout << s << '\n';
    //( abs(j - i) ==  (g % 2 == 0 ) )
    //(abs(j - i) == g)
}