#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define PI acos(-1)

void solve(){
	int n;cin>>n;
	vector<int>b(n+1);
	for(int i=1;i<n;i++){cin>>b[i];}
	b[n]=1e9+10;
	cout<<b[1]<<" ";
	for(int i=1;i<n;i++){
		if(b[i]>=b[i+1]){
			cout<<b[i+1]<<" ";
		}
		else{
			cout<<b[i]<<" ";
		}
	}
	cout<<endl;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	t=1;
	cin>>t;
	while(t--){
		solve();
	}
	

	return 0;

}