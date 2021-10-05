#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void sorting(ll arr[], ll l){
    for(ll i=0;i<l;i++)
	{		
		for(ll j=i+1;j<l;j++)
		{
			if(arr[i]<arr[j])
			{
				ll temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	

}

int main(){
    boost;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin)
        freopen("output.txt", "w", stdout)
    #endif
    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        ll lower[n], higher[n];
        ll l=10e15,h=-1;
        ll i;
        for(i=0; i<n;i++){
            cin>>lower[i]>>higher[i];
            if (lower[i]<l)
                l=lower[i];
            if (higher[i]>h)
                h=higher[i];
        }
        ll A[h-l];
        for(int c=0;c<h-l;c++){
        	A[c]=0;
        }
        int k=0;
        for(ll j=l+1; j<h;j++){
            ll p=0;
            for(i=0;i<n;i++){
            	if(lower[i]<j and j<higher[i]){
                    p+=1;
                }
                A[k]=p;
                k++;
            }
        }
        ll ans=n;
        sorting(A, h-l);

        for(i=0;i<c;i++)
            
        cout<<ans;
    }
return 0;
}