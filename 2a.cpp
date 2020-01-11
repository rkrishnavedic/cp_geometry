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
      ll n;
      cin>>n;
      ll x[n],y[n];
      fori(n){
          cin>>x[i]>>y[i];
      }
      ll t=0;
      fori(n){
          if((x[(i+1)%n]-x[i])*(y[(i+2)%n]-y[i])<(x[(i+2)%n]-x[i])*(y[(i+1)%n]-y[i])){
              t=1;break;
          }    }
      if(t==1){
          cout<<"NOT_CONVEX";
      }
      else{
          cout<<"CONVEX";
      }
    
    return 0;
}
