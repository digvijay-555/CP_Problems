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

        string a, b;
        cin>>a;
        cin>>b;
        ll zr1=0, on1=0, zr2=0, on2=0;
        for(ll i = 0; i<n; i++){
            if(a[i]=='0') zr1++;
            else on1++;
        }

        for(ll i = 0; i<n; i++){
            if(b[i]=='0') zr2++;
            else on2++;
        }
        ll ond = 0;
        if(zr1!=zr2 || on1!=on2){
            cout<<"NO"<<endl;
        }
        else{
            ll diff = 0;
            for(ll i = 0; i<n; i++){
                if(a[i]!=b[i]){
                    diff++;
                    ond+=int(a[i])-'0';
                } 
            }
            
            if(a==b && k%2==1 && (a=="01" || a=="10")){
                cout<<"NO"<<endl;
            }
            else if(k%2==0 && diff==2 && n==2) cout<<"NO"<<endl;
            else if(diff/2<=k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
}