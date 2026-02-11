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
    int n,m;
    cin>>n>>m;
    vector<int> A(n);
    int cN=0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        if(A[i]<0){
            cN++;
        }
    }
    sort(A.begin(),A.end());
    int sum=0;
    if(cN<=m){
        for(int i=0;i<cN;i++){
            sum=sum+A[i];
        }
    }
    else{
        for(int i=0;i<m;i++){
            sum=sum+A[i];
        }
    }
    cout<<-1*sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}