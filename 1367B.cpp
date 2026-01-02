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
    int n;
    cin>>n;
    int arr[n];
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]&1){
            odd++;
        }
        else{
            even++;
        }
    }
    int count=0;
    int i=0;
    if(!(n&1)){
        if(odd==even){
            while(i<n){
                if((i&1) != (arr[i]&1)){
                    count++;
                }
                i=i+2;
            }
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    else{
        if(odd==(n-1)/2 && even==(n+1)/2){
            while(i<n){
                if((i&1) != (arr[i]&1)){
                    count++;
                }
                i=i+2;
            }
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    cout<<count<<endl;
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