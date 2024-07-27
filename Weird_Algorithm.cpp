#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<n<<" "; 
        while(n!=1){
            if(n%2==0){
                n/=2;
            }
            else{
                n=(n*3)+1;
            }
            cout<<n<<" ";
        }        
    }
}