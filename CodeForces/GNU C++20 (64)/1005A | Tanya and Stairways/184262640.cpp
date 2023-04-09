//    int a[] = {0,0,0,0};
//    int n; cin >> n;
//    for(int i = 0; i < n; i++)
//    {
//        int k; cin >> k; a[k - 1]++;
//    }
//    int  ans = a[2] + a[3] + a[1] / 2;
//    a[0] = max(a[0] - a[2], 0) + 2 * (a[1] % 2);
//    cout << ans + (a[0] + 3) / 4 << '\n';
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
 
    int n; cin >> n; int a[n],cnt = 0;
    vector<int>rm;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1)
            cnt++;
    }
    cout << cnt << '\n';
    for(int i = 1; i < n; i++)
    {
        if(a[i] == 1)
        {
            rm.push_back(a[i - 1]);
        }
    }
    for(int i = 0; i < rm.size();i++)
    {
        cout << rm[i] << ' ';
    }
    cout << a[n - 1];
 
}