#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void ct_dist(ll n, string s){
    stack<ll> open_positions; // Stack to track positions of '('
    ll total_distance = 0;

    for (ll i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            open_positions.push(i); // Store position of '('
        } else if (s[i] == ')') {
            if (!open_positions.empty()) {
                ll open_pos = open_positions.top(); // Get position of corresponding '('
                open_positions.pop(); // Remove it from stack
                total_distance += i - open_pos; // Calculate distance
            }
        }
    }

    cout << total_distance << endl;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string s1;
        s1="(";
        ll op_c = 1;
        ll l_op=0;
        for(ll i = 1; i<s.length(); i++){
            if(s[i]=='('){
                op_c++;
                s1+='(';
            }
            else if(s[i]=='_' ){
                if(op_c>0){
                    s1+=')';
                    op_c--;
                }
                else{
                    s1+='(';
                    op_c++;
                }
            }
            else if(s[i]==')'){
                s1+=')';
                op_c--;
            }
        }
        // cout<<s1<<endl;
        ct_dist(n, s1);
        
    }
}