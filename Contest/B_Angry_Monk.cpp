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
        ll a[k];
        for(ll i = 0; i<k; i++){
            cin>>a[i];
        }
        sort(a, a+k);
        ll nk = 0;
        for(ll i = k-2; i>=0; i--){
            if(a[i]>1){
                nk+=((a[i]-1)*2)+1;
            }
            else nk++;
        }
        cout<<nk<<endl;

    }
}