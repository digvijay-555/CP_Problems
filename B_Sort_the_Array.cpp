#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Step 1: Find the first decreasing segment
    int l = 0, r = n - 1;

    // Find the start of the segment
    while(l < n - 1 && a[l] < a[l + 1]) {
        ++l;
    }

    // If the array is already sorted
    if (l == n - 1) {
        cout << "yes\n1 1\n";
        return 0;
    }

    // Find the end of the segment
    while(r > 0 && a[r] > a[r - 1]) {
        --r;
    }

    // Reverse the segment from l to r
    reverse(a.begin() + l, a.begin() + r + 1);

    // Check if the array is sorted
    bool sorted = true;
    for(int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout << "yes\n" << l + 1 << " " << r + 1 << "\n";
    } else {
        cout << "no\n";
    }

    return 0;
}
