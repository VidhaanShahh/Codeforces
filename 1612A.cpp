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
    int x,y;
    cin>>x>>y;
    if(((x+y)&1)){
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    if(!(x&1) && !(y&1)){
        cout<<x/2<<" "<<y/2<<endl;
    }
    else if((x&1) && (y&1)){
        int m=max(x,y);
        bool flag=false;
        int t=2*m-x-y;
        if(m==x){
            flag=true;
        }
        if(flag){
            cout<<t/2<<" "<<y<<endl;
        }
        else{
            cout<<x<<" "<<t/2<<endl;
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