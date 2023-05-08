#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while (t--) {
        int n;
        long long W;
        cin>>n>>W;
        long long L = (W+1)/2;


        vector<pair<int, int>> a;
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            a.push_back({x, i});
        }
        sort(a.begin(), a.end());

        while (a.size() && a.back().first > W)    a.pop_back();

        vector<int> ans;

        long long sum = 0;
        while(a.size()) {
            int x = a.back().first;
            sum += x;
            ans.push_back(a.back().second);
            a.pop_back();
            if (sum >= L) break;
        }

        if (sum < L) {
            cout<<-1<<endl;
            continue;
        }

        assert(L <= sum && sum <= W);
        cout<<ans.size()<<endl;
        for (int x: ans)  cout<<x+1<<" ";
        cout<<endl;
    }
}
