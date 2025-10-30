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

int max(int a, int b){
    if(a>=b){
        return a;
    }
    return b;
}
void solve() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int countmax=0;
    if(n==1){
        if(arr[0]==0){
            cout<<1<<endl;
            return;
        }
        else{
            cout<<0<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
        else{
            countmax=max(count,countmax);
            count=0;
        }
    }
    countmax=max(count,countmax);
    cout<<countmax<<endl;
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