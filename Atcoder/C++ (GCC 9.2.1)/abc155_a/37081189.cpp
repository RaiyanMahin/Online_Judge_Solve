
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if( (a[0] == a[1] ) && (a[0] != a[2]) && (a[1] != a[2]) )
    {
        cout << "Yes" << '\n';
        return 0;
    }
    if( (a[1] == a[2] ) && (a[1] != a[0]) && (a[2] != a[0]) )
    {
        cout << "Yes" << '\n';
        return 0;
    }
    
    else cout << "No" << '\n';
}