#include <bits/stdc++.h>

using namespace std;
#define ll long long int 
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    	int n;
    	cin>>n;
    	string arr;
    	cin>>arr;
    	ll leftdist[n];
        ll rightdist[n];
        ll left=1000000,right=1000000;
    	int ans=0;
    	for(int i=0;i<n;i++){
            if(arr[i]=='1'){
                left=0;
            }else left++;
            leftdist[i]=left;
        }
        for(int i=n-1;i>-1;i--){
            if(arr[i]=='1'){
                right=0;
            }else right++;
            rightdist[i]=right;
        }
        for(int i=0;i<n;i++){
            ans+=min(rightdist[i],leftdist[i]);
        }
        cout<<"Case #"<<j+1<<": "<<ans<<endl;
    }
    return 0;
}