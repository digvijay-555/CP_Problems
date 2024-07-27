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
        string s1, s2;
        cin>>s1;
        cin>>s2;
        ll a[n], b[n];
        for(ll i = 0; i<n; i++){
            if(s1[i]=='0') a[i]=0;
            else a[i]=1;

            if(s2[i]=='0') b[i]=0;
            else b[i]=1;
        }
        ll zr = 0;
        ll on = 0;
        ll x=a[0];
        bool flag = false;
        if(x==1) cout<<"YES"<<endl;
        else {
            for(ll i = 0; i<n; i++){
                


                if(a[i]!=b[i]){
                    if((a[i]==1 && zr>0) || (a[i]==0 && on>0)) flag = false;
                    else {
                        flag = true;
                        break;
                    }
                }
                if(a[i]==1) on++;
                else zr++;
            }
            if(flag) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}