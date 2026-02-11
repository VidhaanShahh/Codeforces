#include<iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n + 1);
        vector<bool> used(n + 1, false);

        p[n] = n;
        used[n] = true;

        for (int i = n - 1; i >= 1; i--) {
            int a = p[i + 1] - i;
            int b = p[i + 1] + i;

            if (a >= 1 && !used[a]) {
                p[i] = a;
            } else {
                p[i] = b;
            }
            used[p[i]] = true;
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
