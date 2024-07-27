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
        ll n1 = (360)%(180-n);
        if(n>=60 && n<180 && n1==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}