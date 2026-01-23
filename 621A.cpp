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
    ll sum=0;
    vector<ll> v(n);
    ll odd=0;
    for(ll i=0;i<n;i++){
        cin>>v.at(i);
        sum=sum+v.at(i);
        if(v.at(i)&1){
            odd++;
        }
    }
    if(odd&1){
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++){
            if(v.at(i)&1){
                cout<<sum-v.at(i)<<endl;
                break;
            }
        }
    }
    else{
        cout<<sum<<endl;
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