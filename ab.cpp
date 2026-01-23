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
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    vector<int> dp;
    for(int i=0;i<n;i++){
        int c1=0;
        for(int j=0;j<n;j++){
            if(mat[i][j]==1){
                c1++;
            }
        }
        if(c1>0){
            dp.push_back(c1);
        }
    }
    bool isS=true;
    for(int i=1;i<(int)dp.size();i++){
        if(dp[i]!=dp[0]){
            isS=false;
            break;
        }
    }
    if(isS){
        cout<<"SQUARE";
    }
    else{
        cout<<"TRIANGLE";
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