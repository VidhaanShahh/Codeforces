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
    ll x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    ll m=max(max(x1,x2),max(x3,x4));
    ll a=m-x1;
    ll b=m-x2;
    ll c=m-x3;
    ll d=m-x4;
    if(a==0){
        cout<<b<<" "<<c<<" "<<d;
    }
    else if(b==0){
        cout<<a<<" "<<c<<" "<<d;
    }
    else if(c==0){
        cout<<a<<" "<<b<<" "<<d;
    }
    else if(d==0){
        cout<<b<<" "<<c<<" "<<a;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}