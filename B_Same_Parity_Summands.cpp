#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        bool even1 = false;
        if(n%2==0) even1=true;
        bool even2 = false;
        if(k%2==0) even2=true;
        bool poss = true;
        if(k>n || k==0) poss = false;

        if(poss){
            if(even1 && even2){
                cout<<"YES"<<endl;
                for(ll i =0; i<k-1; i++){
                    cout<<1<<" ";
                }
                cout<<(n-k+1)<<endl;
            }
            else if(!even1 && !even2){
                cout<<"YES"<<endl;
                for(ll i =0; i<k-1; i++){
                    cout<<1<<" ";
                }
                cout<<(n-k+1)<<endl;
            }
            else if(even1==true && even2==false){
                if(2*(k-1)>=n) cout<<"NO"<<endl;
                else{
                    cout<<"YES"<<endl;
                    for(ll i = 0; i<k-1; i++){
                        cout<<2<<" ";
                    }
                    cout<<(n-(2*(k-1)))<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else cout<<"NO"<<endl;
    }
}