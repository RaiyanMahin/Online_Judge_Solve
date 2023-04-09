
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , k , m; cin >> n >> k >> m; bool J = false;
    vector<long long>rm;
    for(int i = 1; i <= (n -1); i++)
    {
        int x; cin >> x;
        rm.push_back(x);
    }
    long long A = accumulate(rm.begin(),rm.end(),0);
    int V = A / n;

    if(V >= m)
    {

        cout << 0 << '\n';
        J = true;
        return 0;
    }
    //J = false;

    else {
    for(int i = 1; i <= k; i++)
    {
        long long q = A + i;
        int e = q / n;
        if(e == m) {
            cout << i << '\n';
            J = true;
            break;
        }
    }
 }
 if(!J) cout << -1 << '\n';


}

