#include <bits/stdc++.h>
using namespace std;
int main()
{
    int64_t n; cin >> n;
    set < int64_t > s;
    while(n--)
    {
        
        int64_t x; cin >> x;
        if(x)
            s.insert(x);
        
    
    }
    cout << s.size();
    
}