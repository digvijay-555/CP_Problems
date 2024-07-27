#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        
        ll dgt1[a.length()];
        ll dgt2[a.length()];
        for(ll i = 0; i<a.length(); i++){
            dgt1[i] = int(a[i])-48;
            dgt2[i] = int(b[i])-48;
            //cout<<dgt[i]<<" ";
        }
        ll i = 0;
        while(dgt1[i]==dgt2[i]){
            i++;
        }
        bool flag = false;
        if(dgt1[i]>dgt2[i]){
            flag=true;
        }
        for(ll j = i+1; j<a.length(); j++ ){
            if(flag){
                ll x = dgt1[j];
                ll y = dgt2[j];
                dgt1[j]=min(x,y);
                dgt2[j]=max(x,y);
            }
            else {
                ll x = dgt1[j];
                ll y = dgt2[j];
                dgt1[j]=max(x,y);
                dgt2[j]=min(x,y);
            }
        }
        
        // ll grt=0;
        // for(ll i = 1; i<a.length(); i++){
        //     ll x = dgt1[i];
        //     ll y = dgt2[i];
        //     if(dgt1[i-1]>=dgt2[i-1]){
        //         dgt1[i]=min(x,y);
        //         dgt2[i]=max(x,y);
        //         grt=1;
        //     }
        //     else{
        //         dgt1[i]=max(x,y);
        //         dgt2[i]=min(x,y);
        //     }
        // }
        for(ll i=0; i<a.length(); i++){
            cout<<dgt1[i];
        }
        cout<<endl;
        for(ll i=0; i<a.length(); i++){
            cout<<dgt2[i];
        }
        cout<<endl;
    }
}