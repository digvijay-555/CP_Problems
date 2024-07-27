#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    ll m;
    cin >> n >> m;
    
    int petals[n];
    for (int i = 0; i < n; ++i) {
        cin >> petals[i];
    }
    
    sort(petals, petals + n);
    
    ll currentSum = 0;
    ll maxPetals = 0;
    int j = 0;
    
    for (int i = 0; i < n; ++i) {
        currentSum += petals[i];
        
        while (petals[i] - petals[j] > 1) {
            currentSum -= petals[j];
            ++j;
        }
        
        while (currentSum > m) {
            currentSum -= petals[j];
            ++j;
        }
        
        maxPetals = max(maxPetals, currentSum);
    }
    
    cout << maxPetals << endl;
    
    return 0;
}
