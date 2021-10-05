#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool checkseq(ll l, ll m,ll n){
    if (m-l==n-m)
        return true;
    else
        return false;
}
int counter(ll a[],ll b[],ll c[], ll p){
    int l=0;
    if(checkseq(a[0],p,c[2]))
        l++;
    if(checkseq(c[0],p,a[2]))
        l++;
    if(checkseq(a[1],p,c[1]))
        l++;
    if(checkseq(b[0],p,b[1]))
        l++;
    return l;
}

int main(){
    boost;
    int t;
    cin>>t;
    int f=1;
    while(t--){
    ll a[3], b[2], c[3];
    for(int i=0; i<3; i++){
        cin>>a[i];
    }
    b[1]=0;
    cin>>b[0]>>b[1];
    for(int i=0; i<3; i++){
        cin>>c[i];
    }
    int ans=0;
    if(checkseq(a[0],a[1],a[2]))
        ans++;
    if(checkseq(c[0],c[1],c[2]))
        ans++;
    if(checkseq(a[0],b[0],c[0]))
        ans++;
    if(checkseq(a[2],b[1],c[2]))
        ans++;
    int x,y,z,w;
    ll p=0;
    p=(b[0]+b[1])/2;
    x=counter(a,b,c,p);
    p=(a[1]+c[1])/2;
    y=counter(a,b,c,p);
    p=(a[0]+c[2])/2;
    z=counter(a,b,c,p);
    p=(a[2]+c[0])/2;
    w=counter(a,b,c,p);
    x= max(x,y);
    z=max(z,w);
    x=max(x,z);
    ans+=x;
    cout<<"Case #"<<f<<": "<<ans<<endl;
    f++;
    }
    return 0;
}