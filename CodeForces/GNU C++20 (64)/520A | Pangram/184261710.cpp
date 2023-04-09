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
//    int n,a,b,s = 0, q, w = 0; cin  >> n;
//    while(n--)
//    {
//        cin >> a >> b; q = b - a; s += q; w = max(w,s);
//    }
//    cout << w;
//      vector<char>rm;
//      string s; cin >> s; bool a = true; int cnt = 0;
//      for(int i = 0; i < s.size(); i++)
//      {
//          if(s[i] == 'h' && rm.size() == 0)
//          {
//              rm.push_back('h');
//
//          }
//          if(s[i] == 'e' && rm.size()== 1)
//          {
//              rm.push_back('e');
//          }
//          if(s[i] == 'l' && rm.size()== 2)
//          {
//              rm.push_back('l');
//          }
//          if(s[i] == 'l' && rm.size()== 3)
//          {
//              rm.push_back('l');
//          }
//          if(s[i] == 'o' && rm.size()== 4)
//          {
//              rm.push_back('o');
//              if(rm.size() == 5)
//              {
//                  cout << "YES";
//                  return 0;
//              }
//          }
//
//      }
//
//       cout << "NO";
       int n; cin >> n; string s; cin >> s;
       string S = "abcdefghijklmnopqrstuvwxyz";
       int j = 0;
       if(n < 26){
        cout << "NO" << '\n';
        return 0;
       }
       if(n >= 26)
       {
           for(int i = 0; i < n; i++)
           {
               if(s[i] >= 'A' && s[i] <= 'Z')
               {
                   s[i] += 32;
               }
 
           }
           sort(s.begin(), s.end());
           for(int i = 0; i < n; i++)
           {
//               if(s[i + 1] - s[i] > 1)
//               {
//                   cout << "NO" << '\n';
//                   return 0;
//               }
               if(s[i] == S[j])
               {
                   j++;
               }
           }
           if(j == 26)
           {
               cout << "YES" << '\n';
           }
           else cout << "NO" << '\n';
 
       }
 
}