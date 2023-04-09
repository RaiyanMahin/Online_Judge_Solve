 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z; cin>>x>>y>>z;
    if(x>y && x-y>z) cout<<"+"<<endl; if(x<y && y-x>z) cout<<"-"<<endl;
    if(x>y && (x-y)<=z) cout<<"?"<<endl; if(x<y && (y-x)<=z) cout<<"?"<<endl;
    //if(x==y && (x>z && y>z)) cout<<"?"<<endl;
    if(x==y){
       
       if(z!=0)
       {
           cout<<"?"<<endl;
       }
       if(z==0){
           cout<<"0"<<endl;
       }
    }
}