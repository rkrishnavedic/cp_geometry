#include <bits/stdc++.h>
using namespace std;
#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)
#define ll long long

int main() {
     //cout<<"Om\n";
      //praise to lord
       //make cin/cout faster
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       //code now
       ll ax,ay,bx,by;
       cin>>ax>>ay>>bx>>by;
       ll n;cin>>n;
       ll x[n],y[n];
       fori(n){
           cin>>x[i]>>y[i];
       }
       fori(n){
           if((bx-ax)*(y[i]-ay)>(by-ay)*(x[i]-ax)){
               cout<<"LEFT"<<endl;
           }
           else{
               if((bx-ax)*(y[i]-ay)<(by-ay)*(x[i]-ax)){
                   cout<<"RIGHT"<<endl;
               }
               else{
                   if((x[i]-ax)*(x[i]-bx)<=0){
                       cout<<"ON_SEGMENT"<<endl;
                   }
                   else{
                       cout<<"ON_LINE"<<endl;
                   }
               }
           }
}
    return 0;
}
