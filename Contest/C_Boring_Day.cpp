#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n, l, r;
        cin>>n>>l>>r;
        ll a[n];
        for(ll i =0; i<n; i++){
            cin>>a[i];
        }
        ll sum = 0;
        ll st = 0;
        ll end = 0;
        sum = 0;
        ll ct = 0;
         while (end < n) {
            sum += a[end];

            
            while (sum > r && st <= end) {
                sum -= a[st];
                st++;
            }

            if (sum >= l && sum <= r) {
                ct++;
                st=end+1;
                end=st;
                sum = 0;
            }
            else{
                end++;
            }
        }
        cout<<ct<<endl;
    }
}