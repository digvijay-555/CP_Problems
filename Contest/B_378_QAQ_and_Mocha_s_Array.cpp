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
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        ll x1, x2;
        x1 = a[0];
        x2 = a[1];
        bool flag = false;
        for(ll i =1; i<n; i++){
            if(x2%x1==0){
                x2 = a[i+1];
            }
        }
        for(ll i = 0; i<n; i++){
            if(a[i]%x2!=0 && a[i]%x1!=0){
                cout<<"No"<<endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<"Yes"<<endl;
        }
    }
}