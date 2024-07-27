#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll dgt(ll n){
    ll dgts = 1;
    while(n<10){
        n/=10;
        dgts++;
    }
    return dgts;
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        string n;
        cin>>n;
        ll digit=n.size();
        ll pos = 1;
        for(ll i = 1; i<n.size(); i++){
            pos+=(pow(2, i));
        }
        ll x = n.size()-1;
        for(ll i = 0; i<digit; i++){
            if(n[i]=='7'){
                pos+=pow(2, x);
            }
            x--;
        }
        cout<<pos<<endl;
    }
}