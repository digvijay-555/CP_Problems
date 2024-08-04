#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int l=0,r=n-1;
        bool bo=true;
        int mini=l+1;
        int maxi=r+1;
        while(l<r) {
            // cout<<mini<<" "<<maxi<<endl;
            if((a[l]==mini && a[r]==maxi) || (a[l]==maxi && a[r]==mini)) {
                mini++;maxi--;
                l++;r--;
            }
            else if(a[l]==mini) {
                mini++;
                l++;
            }
            else if(a[l]==maxi) {
                maxi--;
                l++;
            }
            else if(a[r]==maxi){
                maxi--;
                r--;
            }
            else if(a[r]==mini) {
                mini++;
                r--;
            }
            else {
                bo=false;
                break;
            }
        }
        if(!bo) {
            cout<<l+1<<" "<<r+1<<endl;
        }
        else cout<<-1<<endl;
    }
}