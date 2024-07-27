#include <iostream>
#include <vector>
using namespace std;

void solve(int n, int x, int y) {
    vector<int> a(n + 1);
    for (int i = y; i <= x; i++)
    {
        a[i] = 1;
    }
    int v = -1;
    for (int i = y - 1; i >= 1; i--)
    {
        a[i] = v, v = -v;
    }
    v = -1;
    for (int i = x + 1; i <= n; i++)
    {
        a[i] = v, v = -v;
    }

    for (int i = 1; i <= n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        solve(n, x, y);
    }
    return 0;
}