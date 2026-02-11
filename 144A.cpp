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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v.at(i);
    }
    int minIdx=0;
    int maxIdx=0;
    int min1=v[0];
    int max1=v[0];
    for(int i=1;i<n;i++){
        if(v[i]<=min1){
            min1=v[i];
            minIdx=i;
        }
        if(v[i]>=max1){
            max1=v[i];
            maxIdx=i;
        }
    }
    if(maxIdx<minIdx){
        cout<<maxIdx+n-1-minIdx;
    }
    else{
        cout<<maxIdx+n-1-minIdx-1<<endl;
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