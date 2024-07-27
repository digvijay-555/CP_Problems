#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll a, b;
        cin>>a>>b;
        ll maxSum = 0;
        vector<ll> x(a);
        for(ll i=0; i<a; i++){
            x[i] = i + 1;
        }
        bool flag = false;

        // Calculate maximum possible sum of distances
        if(a % 2 == 0){
            for(ll i = 1; i < a; i += 2){
                maxSum += i;
            }
            maxSum *= 2;
        } else {
            for(ll i = 0; i < a; i += 2){
                maxSum += i;
            }
            maxSum *= 2;
        }

        if(b > maxSum) {
            cout << "No" << endl;
        } else {
            if(b % 2 != 0) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
                flag = true;
            }
        }

        if (flag) {
            ll i1 = 0, i2 = 1;
            while (i1 < a / 2 && b != 0) {
                if ((i2 - i1) * 2 == b || i2 == a - i1 - 1) {
                    swap(x[i1], x[i2]);
                    b -= ((i2 - i1) * 2);
                    i1++;
                    i2 = i1 + 1; // reset i2 to the next element after i1
                } else {
                    i2++;
                    if (i2 >= a - i1) { // if i2 exceeds the limit, move to the next i1
                        i1++;
                        i2 = i1 + 1; // reset i2 to the next element after i1
                    }
                }
            }
            for (ll i = 0; i < a; i++) {
                cout << x[i] << " ";
            }
            cout << endl;
        }
    }
}
