#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b;
    for (int i = 0; i < n; i++) cin >> a[i];

    b = a;
    sort(b.begin(), b.end());

    long long mn = LLONG_MAX, mx = LLONG_MIN;
    bool diff = false;

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            diff = true;
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
        }
    }

    if (!diff) {
        cout << -1 << '\n';
    } else {
        cout << mx - mn << '\n';
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
