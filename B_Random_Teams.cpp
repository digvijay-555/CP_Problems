#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// Function to compute nCr using an iterative approach
ll combination(ll n, ll r) {
    if(n==1) return 0;
    if (r > n - r) {
        r = n - r;
    }
    ll res = 1;
    for (ll i = 0; i < r; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        
        ll max_comb = combination(n - (m - 1), 2);
        
        ll min_comb = 0;
        ll base_size = n / m;
        ll larger_groups = n % m;
        ll smaller_groups = m - larger_groups;
        
        min_comb = larger_groups * combination(base_size + 1, 2) + smaller_groups * combination(base_size, 2);
        
        cout<<min_comb<<" "<<max_comb<<endl;
    }
}
