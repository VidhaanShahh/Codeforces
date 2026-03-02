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
    vector<int> c1;
    vector<int> c2;
    vector<int> c3;
    for(int i=0;i<n;i++){
        cin>>v.at(i);
        if(v[i]==1){
            c1.push_back(i+1);
        }
        else if(v[i]==2){
            c2.push_back(i+1);
        }   
        else{
            c3.push_back(i+1);
        }
    }
    int max_count = min(c1.size(), min(c2.size(), c3.size()));
    if(max_count==0){
        cout<<0<<endl;
        return;
    }
    cout<<max_count<<endl;
    for(int i=0;i<max_count;i++){
        cout<<c1.at(i)<<" "<<c2.at(i)<<" "<<c3.at(i)<<endl;
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