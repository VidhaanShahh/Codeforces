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
    vector<int> v1(n);
    vector<int> v2(m);
    for(int i=0;i<n;i++){
        cin>>v1.at(i);
    }
    for(int i=0;i<m;i++){
        cin>>v2.at(i);
    }
    if(n==1 && m>1){
        cout<<v1[0]<<endl;
        return;
    }
    if(m==1 && n>1){
        cout<<v2[0]<<endl;
        return;
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if(v1.at(0)==v2.at(0)){
        cout<<v1.at(0)<<endl;
    }
    else if(v1.at(0)>v2.at(0)){
        int x=v2.at(0);
        int y=v1.at(0);
        cout<<x*10+y<<endl;
    }
    else{
        int x=v2.at(0);
        int y=v1.at(0);
        cout<<y*10+x<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}