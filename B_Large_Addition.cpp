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
        ll dgt = 0;
        ll nn = n;
        while(nn!=0){
            dgt++;
            nn/=10;
        }
        ll ch = n/pow(10, dgt-1);
        if(ch>=2){
            cout<<"NO"<<endl;
        }
        else{
            
        }
        //if(n%10==0) dgt++;
        //cout<<dgt<<endl;
    }
}