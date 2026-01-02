#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, x;
    cin >> n >> x;

    vector<pair<ll,ll>> v;  // {value, multiplier}
    for (ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        v.push_back({a, 1});
    }

    ll idx = 0;
    while (idx < v.size()) {
        ll val = v[idx].first;
        ll mul = v[idx].second;

        if (val % x == 0) {
            v.push_back({val / x, mul * x});
        } else {
            break;
        }
        idx++;
    }

    // compute sum
    ll ans = 0;
    for (auto &p : v) {
        ans += p.first * p.second;
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
}
