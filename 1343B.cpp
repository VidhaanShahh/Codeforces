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
    vector<ll> v;
    if((n/2)&1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        ll a=2;
        ll sum=0;
        for(ll i=0;i<(n/2);i++){
            v.push_back(a);
            sum=sum+a;
            a=a+2;
        }
        ll b=1;
        ll sum1=0;
        for(ll i=(n/2);i<n-1;i++){
            v.push_back(b);
            sum1=sum1+b;
            b=b+2;
        }
        v.push_back(sum-sum1);
        for(ll x:v){
            cout<<x<<" ";

        }
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