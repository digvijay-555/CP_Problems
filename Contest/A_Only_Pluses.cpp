#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        for(ll i = 0; i<5; i++){
            a[0]++;
            sort(a, a+3);
        }

        cout<<a[0]*a[1]*a[2]<<endl;
    }
}
