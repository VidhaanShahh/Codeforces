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
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    int sum=0;
    int oddc=0;
    int evenc=0;
    if(x>n){
        cout<<"No"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]&1){
            oddc++;
        }
        else{
            evenc++;
        }
        sum=sum+v[i];
    }
    if(n==x){
        if(sum&1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        if(oddc==0 && evenc!=0){
            cout<<"No"<<endl;
        }
        else if(oddc>0 && evenc>0){
            cout<<"Yes"<<endl;
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