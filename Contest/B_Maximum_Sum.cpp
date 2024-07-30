#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll getMaxSum(vector<ll> &arr, ll k) {
    ll n = arr.size();
    ll sum = accumulate(arr.begin(), arr.end(), 0LL);

    // Min-heap for minimum elements
    priority_queue<ll, vector<ll>, greater<ll>> minHeap(arr.begin(), arr.end());
    // Max-heap for maximum elements
    priority_queue<ll> maxHeap(arr.begin(), arr.end());

    for (ll i = 0; i < k; ++i) {
        // Two smallest elements
        ll min1 = minHeap.top();
        minHeap.pop();
        ll min2 = minHeap.top();
        minHeap.pop();

        // Largest element
        ll max1 = maxHeap.top();
        maxHeap.pop();

        if (min1 + min2 <= max1) {
            // Remove two smallest elements
            sum -= (min1 + min2);
            // Reinsert the popped elements back into the max-heap as they were not removed
            maxHeap.push(min1);
            maxHeap.push(min2);
        } else {
            // Remove the largest element
            sum -= max1;
            // Reinsert the popped elements back into the min-heap as they were not removed
            minHeap.push(min1);
            minHeap.push(min2);
        }
    }

    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Calculate the maximum possible sum after performing k operations
        ll result = getMaxSum(arr, k);
        cout << result << endl;
    }

    return 0;
}
