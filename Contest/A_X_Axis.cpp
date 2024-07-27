#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll a, b, c;
        cin>>a>>b>>c;
        ll aa[3];
        aa[0] = a;
        aa[1] = b;
        aa[2] = c;
        sort(aa, aa+3);
        ll x = aa[1];
        ll sum = 0;
        sum+=(x-aa[0])+(aa[2]-x);
        cout<<sum<<endl;

    }
}