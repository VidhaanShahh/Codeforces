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
    int a1,a2,a4,a5;
    cin>>a1>>a2>>a4>>a5;
    int x1=a1+a2;
    int x2=a4-a2;
    int x3=a5-a4;
    if(x1==x2 && x1==x3){
        cout<<3<<endl;
    }
    else if(x1==x2 && x1!=x3){
        cout<<2<<endl;
    }
    else if(x1==x3 && x1!=x2){
        cout<<2<<endl;
    }
    else if(x2==x3 && x2!=x1){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
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