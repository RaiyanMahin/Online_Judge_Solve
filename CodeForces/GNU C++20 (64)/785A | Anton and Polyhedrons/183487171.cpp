#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,s=0;
    string y; cin>>n;
    while(n--){
        cin>>y;
              if(y[0]=='T'){
            s+=4;
        }
        else if(y[0]=='C'){
            s+=6;
            }
            else if(y[0]=='O'){
                s+=8;
            }
            else if(y[0]=='I'){
                s+=20;
            }
            else if(y[0]=='D'){
                s+=12;
            }
    }
    cout<<s<<endl;
}