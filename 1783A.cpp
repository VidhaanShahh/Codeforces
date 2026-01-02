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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sum=0;
    bool allEqual=true;
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1]){
            allEqual=false;
            break;
        }
    }
    if(allEqual){
        cout<<"NO"<<endl;
        for(int x:v){
            cout<<x<<" ";
        }   
        return;
    }
    else{
        cout<<"YES"<<endl;
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        if(sum==v[i]){
            flag=true;
            break;
        }
        else{
            sum=sum+v[i];
        }
    }
    if(flag){
        sort(v.rbegin(),v.rend());
    }
    for(int x:v){
        cout<<x<<" ";
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