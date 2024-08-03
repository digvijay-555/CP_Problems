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
        }
        bool flag = false;
        for(ll i= 0 ; i<n; i++){
            if(a[i]==k){
                cout<<"Yes"<<" at position "<< i+1<<endl;
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<"Not found"<<endl;
        }

    }
}