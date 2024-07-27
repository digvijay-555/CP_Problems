#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define fr(n) for(long long i=0;i<n;i++)


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
 
        fr(n) cin>>a[i];
 
        if(a[0] != a[n-1]){
            cout<<"YES"<<endl;
            fr(n){
                if(i == n/2) cout<<"B";
                else cout<<"R";
            }
            cout<<endl;
        }
        else cout<<"NO"<<endl;

    }
}