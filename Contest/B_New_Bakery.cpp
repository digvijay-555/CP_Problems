#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, a, b;
        cin>>n>>a>>b;
        ll k = b-a+1;
        if(k>n) k = n;
        if(b<=a){
            cout<<a*n<<endl;
        }
        else{
            ll ans = 0;
            ll a1 = b-k+1;
            ll a2 = b;
            ans = ((a2*(a2+1)/2) - (a1*(a1-1)/2));
            ans+=((n-k)*a);
            cout<<ans<<endl;
        }
    }
}