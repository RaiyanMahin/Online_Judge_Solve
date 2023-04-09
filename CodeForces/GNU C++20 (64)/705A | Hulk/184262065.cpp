    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
     
      int n; cin >> n;  int m = n - 1;
      if(n == 1) cout << "I hate it" ;
      if(n == 2) cout << "I hate that I love it";
      if(n > 2 && n % 2 == 1)
      {
          //cout << "I" << ' ';
          for(int i = 1; i <= (n /2); i++)
          {
              cout << "I hate that I love that" << ' ';
              // cout << "I love that" << ' ';
          }
          
          if(m % 2 == 0) cout << "I hate" << ' ';
          if(m % 2 != 0) cout << "I love" << ' ';
          
          cout << "it";
      }
      if(n > 2 && n % 2 == 0)
      {
          //cout << "I" << ' ';
          for(int i = 1; i <= (n /2) - 1; i++)
          {
              cout << "I hate that I love that" << ' ';
              // cout << "I love that" << ' ';
          }
          
         // if(m % 2 == 0) cout << "I hate" << ' ';
         // if(m % 2 != 0) cout << "I love" << ' ';
          
          cout << "I hate that I love it";
          
      }
        
    }