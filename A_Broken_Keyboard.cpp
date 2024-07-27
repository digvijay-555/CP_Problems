#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n = s.size();
        map<char, bool> single;
        for(ll z = 0; z<n; z++){
            single[s[z]] = false;
        }

        for(ll i = 0; i < n;){
            if(i == n - 1 || s[i] != s[i + 1]){
                single[s[i]] = true;
                i++;
            } else {
                while(i < n - 1 && s[i] == s[i + 1]){
                    i += 2;
                }
            }
        }

        if(n == 1){
            cout << s << endl;
            continue;
        }

        for(auto [ch, is_single] : single){
            if(is_single){
                cout << ch;
            }
        }
        cout << endl;
    }
    return 0;
}
