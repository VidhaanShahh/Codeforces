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
    int dx[]={-1,1,-1,1};
    int dy[]={-1,-1,1,1};
    ll a,b;
    cin>>a>>b;
    ll xK,yK;
    cin>>xK>>yK;
    ll xQ,yQ;
    cin>>xQ>>yQ;
    set<pair<int, int>> kh,qh;
    for(int i=0;i<4;i++){
        kh.insert({xK+dx[i]*a,yK+dy[i]*b});
        kh.insert({xK+dx[i]*b,yK+dy[i]*a});

        qh.insert({xQ+dx[i]*a,yQ+dy[i]*b});
        qh.insert({xQ+dx[i]*b,yQ+dy[i]*a});
    }
    int res=0;
    for(auto pos:kh){
        if(qh.find(pos)!=qh.end()){
            res++;
        }
    }
    cout<<res<<endl;
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