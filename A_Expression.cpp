#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll a, b, c;
        cin>>a>>b>>c;
        ll y1 = a+b+c;
        ll y2 = a*b*c;
        ll x1 = a*(b+c);
        ll x2 = (a+b)*c;
        ll z = max(x1,max(x2,max(y1, y2)));
        cout<<z<<endl;
    }
}