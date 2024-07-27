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
        if(n%2==0 && k%2==1) cout<<"NO"<<endl;
        else if(n%2==1 && k%2==0) cout<<"NO"<<endl;
        else if(k>n) cout<<"NO"<<endl;
        else{
            ll x = sqrt(n);
            if(k>x) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}