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
        bool zr = false;
        bool on = false;
        bool ch = false;
        for(ll i = 0; i<n; i++){
            cin>>a[i];
            if(a[i]==0) zr=true;
            if(a[i]==1) on=true;
        }
        sort(a,a+n);
        for(ll i = 0; i<n-1; i++){
            if(a[i]+1 == a[i+1]) ch = true;
        }

        if(zr && on){
            cout<<"NO"<<endl;
        }
        else{
            if(!zr && !on){
                cout<<"YES"<<endl;
            }
            else if(zr){
                cout<<"YES"<<endl;
            }
            else{
                if(ch==true){
                    cout<<"NO"<<endl;
                }
                else cout<<"YES"<<endl;
            }
        }
        
    }
}