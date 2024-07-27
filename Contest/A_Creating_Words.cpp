#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        char c1, c2;
        c1 = s1[0];
        c2 = s2[0];
        swap(s1[0], s2[0]);
        cout<<s1<<" "<<s2<<endl;

    }
}