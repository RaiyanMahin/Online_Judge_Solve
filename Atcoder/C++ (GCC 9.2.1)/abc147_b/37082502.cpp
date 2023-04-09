#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b; cin >> a; b = a; int s = a.size();
    reverse(b.begin(),b.end());
    int cnt = 0;
    for(int i = 0; i < s ;i++)
    {
        if(a[i] != b[i])
        {
            cnt++;
        }
    }
   if(cnt == 0 ) cout << 0 << '\n';
   else cout << cnt / 2 << '\n';
}
