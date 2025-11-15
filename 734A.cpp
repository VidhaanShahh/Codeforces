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
    string s;
    cin>>s;
    int cA=0;
    int cD=0;
    for(char c:s){
        if(c=='A'){
            cA++;
        }
        else if(c=='D'){
            cD++;
        }
    }
    if(cA==cD){
        cout<<"Friendship"<<endl;
    }
    else if(cA>cD){
        cout<<"Anton"<<endl;
    }
    else{
        cout<<"Danik"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}