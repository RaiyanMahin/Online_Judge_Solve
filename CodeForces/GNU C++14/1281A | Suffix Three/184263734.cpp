        #include "bits/stdc++.h"
        using ll = long long ;
        ///khub e baler approach
        using namespace std;
        vector <string>rm;
        string s,s1,s2,s3,e;
        int main()
        {
            int t; cin >> t;
            for(int i = 1; i <= t; i++)
     
            {
               cin >>  e; s = e; reverse (s.begin() , s.end());
               rm.push_back(s);
               ll d = s.size();
               s1 = s.substr(0,2);
              //cout << s1 << "eta s" << '\n';
                s2 = s.substr(0,4);
               s3 = s.substr(0,5); 
               //cout << s1 << ' ' << s2 << ' ' << s3;
     
               if(s1 == "op")
               {
                   cout << "FILIPINO" << '\n';
            //continue;
     
               }
               if(s2 == "used" || s2 == "usam")
               {
                   cout << "JAPANESE" << '\n';
            //continue;
     
               }
               if(s3 == "adinm")
               {
                   cout << "KOREAN" << '\n';
            //continue;
     
               }
     
     
     
     
     
            }
     
     
     
     
        }