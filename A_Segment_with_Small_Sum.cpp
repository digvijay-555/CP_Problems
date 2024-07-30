#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, s;
        cin>>n>>s;
        ll a[n];
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        ll i = 0, j = 0, curSum = 0, mxl = 0;
        while(j<n){
            mxl=max(mxl, j-i+1);
            if(curSum<=s){
                curSum+=a[j];
                j++;
            }
            else{
                curSum-=a[i];
                i++;
            }
        }
        cout<<
    }
}