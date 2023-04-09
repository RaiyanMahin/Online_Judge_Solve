// ...........................................
#include <bits/stdc++.h>
using namespace std;
deque < char > baal;
 
int main() {
 
    int n; cin >> n;
    string s; cin  >> s;
    if(n < 3)
    {
        return cout << s , 0;
    }
    if(n & 1)
    {
        int cnt = 0;
        for(auto i : s)
        {
 
            if(cnt & 1)
            {
                baal.push_front(i);
 
            }
            else
            {
                baal.push_back(i);
 
            }
            cnt++;
        }
        while(!baal.empty())
        {
            cout << baal.front();
            baal.pop_front();
        }
        return 0;
 
 
 
 
    }
    else
    {
        int cnt = 0;
        for(auto i : s)
        {
 
            if(cnt & 1)
            {
                baal.push_back(i);
 
            }
            else
            {
                baal.push_front(i);
 
            }
            cnt++;
        }
        while(!baal.empty())
        {
            cout << baal.front();
            baal.pop_front();
        }
        return 0;
 
 
 
 
 
    }
 
}