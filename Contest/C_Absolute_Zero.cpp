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
        vector<ll> a(n);
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        bool flag = true;
        for(ll i = 1; i<n; i++){
            ll x = a[i]-a[0];
            if(x<0) x*=-1;
            if(x%2==1){
                cout<<-1<<endl;
                flag = false;
                break;
            }
        }
        if(!flag){
            continue;
        }
        vector<ll> v;
        for(ll i = 0; i<39; i++){
            ll mn = *min_element(a.begin(), a.end());
            ll mx = *max_element(a.begin(), a.end());
            
            ll cn = mn+(mx-mn)/2;
            v.push_back(cn);
            
            for(ll i = 0; i<n; i++){
                a[i]-=cn;
                if(a[i]<0) a[i]*=-1;
            }
            if(cn==0){
                break;
            }
        }

        cout<<v.size()<<endl;
        for(ll i = 0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

        
    }
}