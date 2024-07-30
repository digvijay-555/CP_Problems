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
        string s1, s2;
        cin>>s1>>s2;
        ll ct = 0;
        for(ll i = 1; i<n-1; i++){
            if(s1[i]=='.' && s1[i-1]=='.' && s1[i+1]=='.'){
                if(s2[i-1]=='x' && s2[i]=='.' && s2[i+1]=='x') ct++;
            }

            if(s2[i]=='.' && s2[i-1]=='.' && s2[i+1]=='.'){
                if(s1[i-1]=='x' && s1[i]=='.' && s1[i+1]=='x') ct++;
            }

        }
        cout<<ct<<endl;
    }
}