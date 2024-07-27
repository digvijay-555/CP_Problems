#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll a1, b1, a2, b2;
        cin>>a1>>b1>>a2>>b2;
        if((a1>=b1 && a2<=b2) || (a1<=b1 && b2<=a2)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}