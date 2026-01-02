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

int sum1(int n){
    int s=0;
    while(n>0){
        s=s+n%10;
        n=n/10;
    }
    return s;
}
void solve() {
    int n;
    cin>>n;
    int x=n;
    int s=sum1(x);
    if(s%4==0){
        cout<<n<<endl;
    }
    else{
        for(int i=n+1; ;i++){
            if(sum1(i)%4==0){
                cout<<i<<endl;
                break;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}