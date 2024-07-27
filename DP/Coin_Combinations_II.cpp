#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;


ll max_ways(ll arr[], ll n, ll sum) {
    ll dp[sum+1]={};
    dp[0]=1;

    for(ll i = 1; i<=n; i++){
        for(ll j = 0; j<sum; j++){
            if(arr[j]>i){
                continue;
            }
            dp[i]=(dp[i]+dp[i-arr[j]])%mod;
        }
    }
    return dp[sum];
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t_cases = 1;
    //cin >> t_cases;
    while (t_cases--) {
        ll n, sum;
        cin>>n>>sum;
        ll arr[n];
        for(ll i = 0; i<n; i++){
            cin>>arr[i];
        }
        cout << max_ways(arr, n, sum) << endl;
    }
    return 0;
}