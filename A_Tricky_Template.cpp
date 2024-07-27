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
        string a, b, c;
        cin>>a>>b>>c;
        bool flag = false;
        for(ll i = 0; i<n; i++){
            if(a[i]==b[i] && b[i]!=c[i]){
                cout<<"YES"<<endl;
                flag = true;
                break;
            }
            else if(a[i]!=b[i] && b[i]!=c[i] && c[i]!=a[i]){
                cout<<"YES"<<endl;
                flag = true;
                break;
            }


        }
        if(!flag) cout<<"NO"<<endl;
    }
}