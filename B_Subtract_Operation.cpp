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
        bool flag = true;
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        ll i = 0, j = 1;
        while(i<n && j<n){
            if(a[j]-a[i]==k){
                cout<<"YES"<<endl;
                flag= false;
                break;
            }
            else if(a[j]-a[i]>k) i++;
            else j++;
        }
        if(flag){
            cout<<"NO"<<endl;
        }
    }
}