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
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    ll max1=max(a,b);
    ll min1=min(a,b);
    if(max1%min1!=0){
        cout<<-1<<endl;
        return;
    }
    ll p=max1/min1;
    if(!(p&(p-1))){
        ll l=log2(p);
        if(l%3==0){
            cout<<l/3<<endl;
        }
        else{
            cout<<(l/3)+1<<endl;
        }
    }
    else{
        cout<<-1<<endl;
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