#include<bits/stdc++.h>
#define ll long long int
using namespace std;



void solve(){
	int n;string s;
	string rs;
	cin>>n>>s;
	rs=s;reverse(rs.begin(),rs.end());
	int now=0;
	if (s.size()>1&&s[0]==s[1]){
		cout<<s[0]<<s[1]<<endl;
		return;
	}
	s+="0";
	for (int i=1;i<n;i++){
		if (s[i-1]<s[i]) break;
		now=i;
	}
	cout<<s.substr(0,now+1)<<rs.substr(n-now-1)<<endl;
	return;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
	
}
