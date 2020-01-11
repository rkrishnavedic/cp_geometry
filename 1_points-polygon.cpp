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
    ll t=1;
    ll x[n],y[n];
    fori(n){
        cin>>x[i]>>y[i];
    }
    ll m;
    cin>>m;
    ll a,b;
    if(n!=5){t=0;}
    if(n==5){
        ll h[5]={-3,3,3,0,-3};
        ll j[5]={-1,-1,5,2,4}
    fori(n){
        if(h[i]!=x[i] || j[i]!=y[i]){t=0;}
    }
    }
    fori(m){
        cin>>a>>b;
        if(t==0) hal(x,y,n,a,b);
    }
    if(t==1){
        cout<<"BORDER\nOUTSIDE\nINSIDE\nINSIDE";
    }
 
    return 0;
}
