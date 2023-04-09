
        #include "bits/stdc++.h"
        using namespace std;
        using ll = long long;
        int main()
        {
            ll n; cin >> n;
            string s; cin >> s;
            ll d = s.size();
            ll cnt = 0;
            for(ll i = 0; i < d; i++)
            {
                if(s[i] == 'A')
                {
                    if(s[i + 1] == 'B')
                    {
                        if(s[i + 2] == 'C')
                        {
                            cnt++;
                        }
                    }
                }
            }
            cout << cnt << '\n';
            
    
            
        }