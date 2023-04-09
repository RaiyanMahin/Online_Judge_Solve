#include<bits/stdc++.h>
        using namespace std;

        typedef long long ll;
        //#define pb push_back

           int main()
         {
             int n; cin >> n;
             bool a = true;
             for(int i=1;i<=9;i++)
             {
                 for(int j=1;j<=9;j++)
                 {
                     if(i*j==n){
                        a =false;
                     }
                 }
             }
             if(!a) cout << "Yes" << '\n';
             else cout << "No" << '\n';
         }
