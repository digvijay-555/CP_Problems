#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, f, k;
        cin>>n>>f>>k;
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        ll f1 = a[f-1];
        sort(a, a+n);
        ll b[n];
        for(ll i = 0; i<n; i++){
            b[i] = a[n-i-1];
        }
        
        ll ch;
        for(ll i = 0; i<n; i++){
            if(b[i]==f1){
                ch = i;
                break;
            }
        }
        if(ch == n-1 && k!=n){
            cout<<"NO"<<endl;
        }
        else if(ch==k-1 && b[ch+1]==b[ch]) cout<<"MAYBE"<<endl;
        else if(ch>=k) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}