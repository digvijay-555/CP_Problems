#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int greatestPowerOf2(int n) {
    // Edge case for n = 0
    if (n == 0) return 0;

    // Calculate the greatest power of 2 less than or equal to n
    int k = log2(n); // log2 gives the base-2 logarithm

    // Check if 2^k is greater than n, decrement k if necessary
    while (pow(2, k) > n) {
        k--;
    }

    return k;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        cout<<greatestPowerOf2(n)+1<<endl;
        ll i = n;
        ll x, y=1, z=0, p = 0;
        while(i!=0){
            if(i%2==0) x=i/2;
            else x=(i/2)+1;
            for(ll j = p; j<x; j++){
                a[j]=y;
                z = j;
                p=j;
            }
            y++;
            i=z+1;
        }
        for(ll i = 0; i<n; i++){
            cout<<a[n-i-1]<<" ";
        }
        cout<<endl;
    }
}