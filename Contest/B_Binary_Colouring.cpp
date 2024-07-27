#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x = 0;
        while(!(n<2)){
            n/=2;
            x++;
        }
        cout<<x<<" ";
        ll x1 = pow(2, x);
        ll x2 = pow(2, x+1);
        cout<<x1<<" "<<x2<<" ";
        ll m1 = n-x1;
        ll m2 = x2-n;
        cout<<m1<<" "<<m2<<endl;


    }
}

