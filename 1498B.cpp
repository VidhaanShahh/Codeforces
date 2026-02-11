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
    ll n,W;
    cin>>n>>W;
    vector<ll> v(n);
    set<ll> s;
    vector<ll> v1(100000,0);

    for(ll i=0;i<n;i++){
        cin>>v[i];
        s.insert(v.at(i));
        v1[v[i]-1]++;
    }
    ll sOs=0;
    for(ll x:s){
        sOs=sOs+x;
    }
        int m=v1[0];
        for(ll i=1;i<v1.size();i++){
            if(v1.at(i)>=m){
                m=v1.at(i);
            }
        }

    cout<<m<<endl;
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