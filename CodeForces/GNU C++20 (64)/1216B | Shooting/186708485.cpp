 
    #include<bits/stdc++.h>
    using namespace std;
    #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
    typedef long long ll;
    int main()
    {
        int n; cin >> n;
        vector< pair<int,int> >rm;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            rm.push_back( {x , i + 1 } );
        }
        sort(rm.rbegin(),rm.rend());
        int ans  = 0;
        for(int i = 0; i < n ; i++)
        { 
            ans += (rm[i].first * i);
            ans += 1;
            
        }
        cout << ans << '\n';
        for(int i = 0; i < n; i++)
        {
          cout << rm[i].second << ' ';  
        }
    }