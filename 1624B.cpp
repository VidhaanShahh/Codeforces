#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <set>
#include <queue>
#include <unordered_set>
#include <numeric>
#include <stack>

#define all(x) (x).begin(), (x).end()
#define dbg(x) cout << "Line(" << __LINE__ << ") -> " << #x << " = " << (x) << endl;

using namespace std;

template <typename S, typename T>
void smax(S &a, const T &b)
{
    if (a < b)
        a = b;
};

template <typename S, typename T>
void smin(S &a, const T &b)
{
    if (a > b)
        a = b;
};

using ll = long long;
const int INF = 1e9 + 7;

bool check(int a, int b){
    if(a&1 && b&1){
        return true;
    }
    else if(!(a&1) && !(b&1)){
        return true;
    }
    return false;
}
void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    if ((a + c) % 2 == 0 && (a + c) / 2 >= b && ((a + c) / 2) % b == 0) {
        cout << "YES";
        return;
    }
    long long A = 2*b - c;
    if (A > 0 && A % a == 0) {
        cout << "YES";
        return;
    }
    long long C = 2*b - a;
    if (C > 0 && C % c == 0) {
        cout << "YES";
        return;
    }
    cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int TC;
    cin >> TC;
    while(TC--) solve(), cout << endl;
    return 0;
}