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
        char x;
        cin>>x;

        string s;
        cin>>s;
        s+=s;
        if(x=='g'){
            cout<<0<<endl;
            continue;
        } 
        ll ff = 0;
        for(ll i = 0; i<n; i++){
            if(s[i]==x){
                ff=i;
                break;
            }
        }

        ll fc=ff+1;
        for(ll z = fc; z<(2*n)-1; z++){
            if(s[z]=='g'){
                fc=z;
                break;
            }
        }

        ll mx = fc-ff;

        ll i = fc+1;
        ll j = i+1;

        while(j<s.length()){
            if(s[j]=='g' && s[i]==x){
                mx = max(mx, j-i);
                i=j+1;
                j+=2;
            }
            else if(s[j]!='g' && s[i]!=x){
                j++;
                i++;
            }
            else if(s[j]!='g'){
                j++;
            }
            else if(s[i]!=x){
                i++;
            }


        }
        cout<<mx<<endl;
        // ll i = ff;
        // ll j = fc;
        // ll mx = (j%n)-(i%n);
        // while(j<ff+n){
        //     if(j%n<i && s[j%n]=='g' && s[i]==x){
        //         mx = max(mx, ((j%n)+n+1-i));
        //     }
        //     else if(s[j%n]=='g' && s[i]==x) mx = max(mx, j-i);
        //     i = j+1;
        //     j+=2;
            

        //     if(s[i]!=x && s[j%n]!='g'){
        //         i++;
        //         j++;
        //     }
        //     else if(s[i]!=x){
        //         i++;
        //     }
        //     else if(s[j%n]!='g'){
        //         j++;
        //     }
        // }
        // cout<<mx<<endl;
    }
}