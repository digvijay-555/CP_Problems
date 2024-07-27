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
        ll fv = 0;
        ll zr = 0;
        for(ll i = 0; i<n; i++){
            ll x;
            cin>>x;
            if(x==0) zr++;
            else fv++;
        }

        string s = "";
        for(ll i = 0; i<fv; i++){
            s+='5';
        }
        for(ll i = 0; i<zr; i++){
            s+='0';
        }
        ll sum = fv*5;
        while(sum%9!=0){
            s=s.substr(1, n-1);
            n--;
            sum-=5;
            fv--;
        }
        if(zr==0) cout<<-1<<endl;
        else if(fv==0) cout<<0<<endl;
        else cout<<s<<endl;
    }
}