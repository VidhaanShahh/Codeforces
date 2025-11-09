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

void solve() {
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int d1=abs(x2-x1)+abs(x3-x1);
    int d2=abs(x1-x2)+abs(x3-x2);
    int d3=abs(x1-x3)+abs(x2-x3);
    if(d1<=d2 && d1<=d3){
        cout<<d1<<endl;
    }
    else if(d2<=d1 && d2<=d3){
        cout<<d2<<endl;
    }
    else{
        cout<<d3<<endl;
    }
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