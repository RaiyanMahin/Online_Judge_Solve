// baal krbi
#include "bits/stdc++.h"
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b,c;  cin >> a >> b >> c;
    int d = min(a / 1, min(b / 2 , c / 4));
    if(b >= d * 2 and c >= d * 4)
    {
      cout << d + d * 2 + d * 4;
      return 0;
    }
    cout << 0;
    
    
 
 
}