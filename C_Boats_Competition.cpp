#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> weights(n);
        for(int i = 0; i < n; i++){
            cin >> weights[i];
        }
        
        int max_teams = 0;
        for(int s = 2; s <= 2 * n; s++){
            vector<int> freq(n + 1, 0);
            for(int i = 0; i < n; i++){
                freq[weights[i]]++;
            }
            int current_teams = 0;
            for(int i = 1; i <= n; i++){
                if(s - i > 0 && s - i <= n && i != s - i){
                    int pairs = min(freq[i], freq[s - i]);
                    current_teams += pairs;
                    freq[i] -= pairs;
                    freq[s - i] -= pairs;
                } else if(i == s - i) {
                    current_teams += freq[i] / 2;
                    freq[i] = 0;
                }
            }
            max_teams = max(max_teams, current_teams);
        }
        
        cout << max_teams << endl;
    }
    return 0;
}
