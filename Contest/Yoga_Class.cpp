#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        int n,x,y;
	    cin>>n>>x>>y;
	    int ans1=(n/2)*y + (n%2)*x;
	    int ans2=n*x;
	    cout<<max(ans1,ans2)<<endl;
    }
}