#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i =0; i<n; i++){
            cin>>a[i];
        }
        ll k;
        ll z = a[0];
        bool flag = true;
        for(ll i = 0; i<n; i++){
            if(a[i]>a[i+1]){
                flag = false;
            }
        }
        for(ll i =0; i<n-1; i++){
            if(a[i]>a[i+1]){
                k = i+1;
                break;
            }
            if(i == n-1){
                cout<<"Yes"<<endl;
                exit(1);
            }
        }
        ll max = a[k];
        for(ll i = k; i<n; i++){
            if(a[i]>max) max = a[i];
        }

        if(flag) cout<<"Yes"<<endl;
        else if(max>=a[0]) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}