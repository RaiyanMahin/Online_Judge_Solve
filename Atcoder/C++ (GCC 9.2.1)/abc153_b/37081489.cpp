
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin >> n >> m; 
    vector<int >rm;
    for(int i = 1; i <= m; i++)
    {
        int x; cin >> x;
        rm.push_back(x);
    }
    int s  = accumulate(rm.begin(),rm.end(),0);
    if(s >= n) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    
    
}
