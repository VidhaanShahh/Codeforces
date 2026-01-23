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

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<int> v(m);
    for(ll i=0;i<m;i++){
        cin>>v.at(i);
    }
    ll cnt=0;
    ll a=1;
    for(ll i=0;i<m;i++){
        if(v[i]>=a){
            cnt=cnt+(v[i]-a);
        }
        else{
            cnt=cnt+(n-a+v[i]);
        }
        a=v[i];
    }
    cout<<cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}