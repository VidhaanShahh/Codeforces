#include <iostream>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 0;
    } 
    else if (a % b == 0 || b % a == 0) {
        cout << 1;
    } 
    else {
        cout << 2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;  // Read number of test cases
    while (T--) {
        solve();
        cout << "\n";
    }

    return 0;
}
