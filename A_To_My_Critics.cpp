#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a, a+3);
        ll sum = a[2]+a[1];
        if(sum>=10) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}