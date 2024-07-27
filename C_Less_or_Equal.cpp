#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        if(k==0 && a[0]>1) cout<<1<<endl;
        else if(k==0 && a[0]==1) cout<<-1<<endl;
        else if(k==1 && n==1 && a[0]==1) cout<<-1<<endl;
        else if(k==1 && n==1 && a[0]==1000000000) cout<<1000000000<<endl;
        else if(k==1 && n==1 && a[0]!=1) cout<<a[0]-1<<endl;
        else if(a[k-1]==a[k]) cout<<-1<<endl;
        else cout<<a[k-1]<<endl;

    }
}