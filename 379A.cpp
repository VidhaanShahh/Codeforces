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

int fn(int a, int b){
    if(a==1){
        return 1;
    }
    if(a<b){
        return a;
    }
    return a-a%b+fn((a/b)+a%b,b);
}
void solve() {
    int a,b;
    cin>>a>>b;
    if(a<b){
        cout<<a<<endl;
    }
    else if(a==b){
        cout<<b+1<<endl;
    }
    else{
        cout<<fn(a,b);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}