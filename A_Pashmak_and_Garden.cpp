#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin>>t;
    while(t--){
        ll x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2 || y1==y2){
            if(x1 == x2){
                ll l = y2-y1;
                ll x3 = x1+l;
                ll x4 = x3;
                ll y3 = y1;
                ll y4 = y2;
                cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
            }
            else{
                ll l = x2-x1;
                ll y3 = y1+l;
                ll y4 = y3;
                ll x3 = x1;
                ll x4 = x2;
                cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
            }
        }
        else{
            if(x2-x1==y2-y1 || x2-x1==(-1*(y2-y1))){
                ll l = x2-x1;
                ll x3 = x1;
                ll y3 = y2;
                ll x4 = x2;
                ll y4 = y1;
                cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
            }
            else cout<<-1<<endl;
        }
    }
}