#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vector<pair<ll, ll>> movies(n);

    for (ll i = 0; i < n; ++i) {
        cin >> movies[i].first >> movies[i].second;
    }

    // Sort the movies by their ending times
    sort(movies.begin(), movies.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b) {
        return a.second < b.second;
    });

    ll count = 0;
    ll last_end_time = 0;

    for (const auto &movie : movies) {
        if (movie.first >= last_end_time) {
            count++;
            last_end_time = movie.second;
        }
    }

    cout << count << endl;

    return 0;
}
