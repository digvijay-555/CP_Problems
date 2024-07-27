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
        unordered_map<string, ll> stringCount;
        for(ll i = 0; i < n; i++){
            string y;
            cin>>y;
            if(stringCount.find(y) == stringCount.end()){
                stringCount[y] = 0;
                cout<<"OK"<<endl;
            } else {
                stringCount[y]++;
                cout<<y<<stringCount[y]<<endl;
            }
        }
    }
}
