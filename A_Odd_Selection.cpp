#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
            a[i]=a[i]%2;
        }
        ll odd = 0;
        ll even = 0;
        for(ll i = 0; i<n; i++){
            if(a[i]==1) odd++;
            else even++;
        }
        if(k<n && odd>0 && even>0) cout<<"Yes"<<endl;
        else if(odd==0) cout<<"No"<<endl;
        else if(k<n && k%2==0 && even==0) cout<<"No"<<endl;
        else if(k<n && k%2!=0) cout<<"Yes"<<endl;
        else if(k==n && odd%2==0) cout<<"No"<<endl;
        else if(k==n && odd%2!=0) cout<<"Yes"<<endl;

    }
}