#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ms.insert(a);
    }
    int c[m];
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
        auto j = ms.lower_bound(c[i]);
        if (j == ms.begin())
        {
            if (c[i] == *j)
            {
                cout << *j << endl;
                ms.erase(j);
            }
            else
                cout << -1 << endl;
        }
        else if (j == ms.end())
        {
            j--;
            cout << *j << endl;
            ms.erase(j);
        }
        else
        {
            if (*j == c[i])
            {
                cout << *j << endl;
                ms.erase(j);
            }
            else if (*j > c[i])
            {
                j--;
                if (*j <= c[i])
                {
                    cout << *j << "\n";
                    ms.erase(j);
                }
                else
                    cout << -1 << "\n";
            }
        }
    }
    // auto i = lower_bound(ms.begin(), ms.end(), 0);
    // if (i == ms.begin())
    //     cout << 0 << endl;
    // else
    //     cout << 1 << endl;
}
