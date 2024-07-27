#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, m, a, b;
        cin>>n>>m>>a>>b;
        bool flag = false;
        ll cmp = m*a;
        if(cmp>b) flag = true;
        ll sm=0;
        if(!flag){
            cout<<n*a<<endl;
        }
        else{
            if(m<=n){
                ll x = n/m;
                sm+=x*b;
                if((n-(m*x))*a < b) sm+=((n-(m*x))*a);
                else sm+=b;
                cout<<sm<<endl;
            }
            else{
                if(b>a*n) cout<<a*n<<endl;
                else cout<<b<<endl;
            }
        }
    }
}