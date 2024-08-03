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
        string s;
        cin>>s;
        set<char> st;
        for(ll i = 0; i<n; i++){
            st.insert(s[i]);
        }
        vector<ll> v;
        for(auto it: st){
            ll i=0, j = n-1;
            ll ct = 0;
            while(i<j){
                if(s[i]==s[j]){
                    i++;
                    j--;
                }
                else if(s[i]==it){
                    i++;
                    ct++;
                }
                else if(s[j]==it){
                    j--;
                    ct++;
                }
                else{
                    ct=-1;
                    break;
                }
            }
            v.push_back(ct);
        }
        bool flag=true;
        sort(v.begin(), v.end());
        for(ll i= 0 ; i<v.size(); i++){
            if(v[i]!=-1){
                cout<<v[i]<<endl;
                flag=false;
                break;
            }

        }
        if(flag){
            cout<<-1<<endl;
        }
    }
}