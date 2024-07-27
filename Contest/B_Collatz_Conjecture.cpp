#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll cod(ll x, ll y){
    while(x%y==0){
        x/=y;
    }
    return x;
}



int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll x, y, k;
        cin>>x>>y>>k;
        ll ch = 0;
        ll ans = 0;

        while(x>1){
            ll rm = (((x/y)+1)*y)-x;
            if(k<rm){
                ans = k+x;
                ch = 1;
                break;
            }
            k-=rm;
            x+=rm;
            x=cod(x, y);
        }

        if(ch==0){
            y--;
            ans=1+(k%y);
        }
        cout<<ans<<endl;
    }
}