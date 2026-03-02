#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<int> vis(n + 1, 0);
        bool ok = true;

        for (int i = 1; i <= n; i++) {
            if (vis[i]) continue;

            vector<int> idx, vals;

            int x = i;
            while (x <= n) {
                vis[x] = 1;
                idx.push_back(x);
                vals.push_back(a[x]);
                x *= 2;
            }

            sort(idx.begin(), idx.end());
            sort(vals.begin(), vals.end());

            for (int j = 0; j < (int)idx.size(); j++) {
                if (idx[j] != vals[j]) {
                    ok = false;
                    break;
                }
            }

            if (!ok) break;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
