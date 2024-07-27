#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)cin >> arr[i];
        int cur = arr[0];
        int part = 1;
        for(int i = 0; i < n; i++){
            cur &= arr[i];
            if(cur == 0){
                if(i == n-1)break;
                part++;
                cur = arr[i + 1];
            }
        }
        if(cur != 0)part--;
        part = max(part,1);
        cout << part << '\n';

    }
}
