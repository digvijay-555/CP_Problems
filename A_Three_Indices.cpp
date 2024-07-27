#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        bool flag = false;
        for(ll i = 1; i<n-1; i++){
            if(a[i-1]<a[i] && a[i+1]<a[i]){
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
    }
}