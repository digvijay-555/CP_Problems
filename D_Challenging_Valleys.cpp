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
        ll b[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b, b+n);

        ll s = b[0];
        ll pos = 0;
        for(ll i = 0; i<n; i++){
            if(a[i]==s){
                pos = i;
                break;
            }
        }

        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        bool front = false;
        bool back = false;

        for(ll i = pos; i<n; i++){
            if(i==n-1) {
                front = true;
                break;
            }

            else {
                if(a[i]>a[i+1]){
                    front = false;
                    break;
                }
                else front = true;
            }
        }

        for(ll i = pos; i>=0; i--){
            if(i==0) {
                back = true;
                break;
            }

            else {
                if(a[i]>a[i-1]){
                    back = false;
                    break;
                }
                else back = true;
            }
        }

        if(front && back){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;


    }
}