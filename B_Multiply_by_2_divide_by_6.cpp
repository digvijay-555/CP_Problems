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
        ll tw=0;
        ll tr=0;
        if(n==1) cout<<0<<endl;
        else {
            while(n%2==0){
                n/=2;
                tw++;
            }
            while(n%3==0){
                n/=3;
                tr++;
            }
            ll ct=0;
            if(n>1) cout<<-1<<endl;
            else{
                if(tw<=tr){
                    ct+=tw;
                    tr=tr-tw;
                    tw=0;
                    ct=ct+(tr*2);
                    cout<<ct<<endl;
                }
                else cout<<-1<<endl;
            }
        }
    }
}