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
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum=sum+v[i];
    }
    ll count=0;
    ll sum1=0;
    sort(v.begin(),v.end());
    for(ll i=n-1;i>=0;i++){
        sum1=sum1+v[i];
        ll k=sum-sum1;
        if(sum1>k){
            count++;
            break;
        }
        else{
            count++;
        }
    }
    cout<<count<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}