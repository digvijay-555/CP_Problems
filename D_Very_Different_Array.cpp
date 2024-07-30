#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yyy "YES"
#define nnn "NO"
typedef long long ll;
typedef pair<ll,ll>P;
priority_queue<ll,vector<ll>,greater<ll> > q;
ll a[200005],b[200005];
void solve()
{
	ll n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int j=1;j<=m;j++)
	cin>>b[j];
	sort(a+1,a+n+1);
	sort(b+1,b+m+1);
	ll sum=0;
	for(int i=1;i<=n;i++)
	{
	sum+=max(abs(a[i]-b[n-i+1]),abs(b[m-i+1]-a[i]));	
	}
	cout<<sum<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	  solve();	
	}
}