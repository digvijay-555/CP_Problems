#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n], b[n], c[n];
        for(ll i = 0 ;i<n; i++){
            cin>>a[i]>>b[i]>>c[i];
        }
        ll a1 = 0, b1= 0, c1 = 0;
        for(ll i = 0; i<n; i++){
            a1=a1+a[i];
            b1=b1+b[i];
            c1=c1+c[i];
        }
        if(a1 == 0 && b1==0 && c1==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}