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
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        ll i = 0, j = 1, mx = 1;
        while(j<n){
            if(a[j]-a[i]>5){
                i++;
            }
            else{
                mx=max(mx, j-i+1);
                j++;
            }
        }
        cout<<mx<<endl;
    }
}