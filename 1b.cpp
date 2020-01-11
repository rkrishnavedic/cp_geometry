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
    ll ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    ll n;cin>>n;
    ll x[n],y[n];
    fori(n){
        cin>>x[i]>>y[i];
    }
    if((bx-ax)*(cy-ax)<(by-ay)*(cx-ay)){swap(cx, bx);swap(cy, by);}
    fori(n){
        if((bx-ax)*(y[i]-ay)>(by-ay)*(x[i]-ax) && (cx-bx)*(y[i]-by)>(cy-by)*(x[i]-bx) && (ax-cx)*(y[i]-cy)>(ay-cy)*(x[i]-cx)){
            cout<<"INSIDE\n";
        }
        else{
            if((bx-ax)*(y[i]-ay)<(by-ay)*(x[i]-ax) || (cx-bx)*(y[i]-by)<(cy-by)*(x[i]-bx) || (ax-cx)*(y[i]-cy)<(ay-cy)*(x[i]-cx)){
                cout<<"OUTSIDE\n";
            }
            else{
                if(((bx-ax)*(y[i]-ay)==(by-ay)*(x[i]-ax)&&(x[i]-ax)*(x[i]-bx)<=0) || ((cx-bx)*(y[i]-by)==(cy-by)*(x[i]-bx)&&(x[i]-cx)*(x[i]-bx)<=0) || ((ax-cx)*(y[i]-cy)==(ay-cy)*(x[i]-cx)&&(x[i]-ax)*(x[i]-cx)<=0)){
                    cout<<"BORDER\n";
                }
                else{
                    cout<<"OUTSIDE\n";
                }
            }
        }
    }
    
    return 0;
}
