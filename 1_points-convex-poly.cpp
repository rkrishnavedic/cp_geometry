#include <bits/stdc++.h>

using namespace std;
#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)
#define ll long long

void hal(ll x[],ll y[],ll n,ll a, ll b){
    ll c=0;ll t=0;ll z=0;
    fori(n){
        z=0;
        if(y[(i+1)%n]<y[i]){
            swap(y[(i+1)%n],y[i]);
            swap(x[(i+1)%n],x[i]);
            z=1;
        }
        if((y[i]-b)*(y[(i+1)%n]-b)<=0){
            if((x[(i+1)%n]-x[i])*(b-y[i])<(y[(i+1)%n]-y[i])*(a-x[i])){
                if(b!=y[(i+1)%n]) c++;
            }
            if((x[(i+1)%n]-x[i])*(b-y[i])==(y[(i+1)%n]-y[i])*(a-x[i])){
                t=1;break;
            }
        }
        if(z==1){swap(y[(i+1)%n],y[i]);
            swap(x[(i+1)%n],x[i]);}
    }
    if(t==1){
        cout<<"BORDER\n";
    }
    else{
        if(c%2!=0){cout<<"INSIDE\n";}
        else{
            cout<<"OUTSIDE\n";
        }
    }
}


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
    ll m;
    cin>>m;
    ll a,b;
    fori(m){
        cin>>a>>b;
        hal(x,y,n,a,b);
    }
 
    return 0;
}
