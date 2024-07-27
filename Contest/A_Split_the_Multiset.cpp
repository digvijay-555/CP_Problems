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
        if(n==1) cout<<0<<endl;
        // else if(n==2 && k==2) cout<<1<<endl;
        // else if(n<k){
        //     cout<<1<<endl;
        // }

        else{
            ll ans = 0;
            k--;
            while(n>1){
                n=n-k;
                ans++;
            }
            cout<<ans<<endl;
        }
    }
}