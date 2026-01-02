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
    string s;
    cin>>s;
    if(n==1){
        if(s=="1"){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
        return;
    }
    int count=0;
    for(char c:s){
        if(c=='1'){
            count++;
        }
    }
    cout<<n+(n-2)*count<<endl;
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
