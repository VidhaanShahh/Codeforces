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
    ll n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    if(n==1 || c=='g'){
        cout<<0<<endl;
        return;
    }
    bool hasG=false;
    vector<ll> found;
    for(ll i=0;i<n;i++){
        if(s[i]==c){
            found.push_back(i);
        }
        if(s[i]=='g'){
            hasG=true;
        }
    }
    if(!hasG){
        cout<<0<<endl;
        return;
    }
    ll n1=found.size();
    vector<ll> distance;
    for(ll i=0;i<n1;i++){
        ll max1=0;
        ll j=found[i];
        while(true){
            j=(j+1)%n;
            max1++;
            if(s[j]=='g'){
                break;
            }
        }
        distance.push_back(max1);
    }
    sort(distance.begin(),distance.end());
    cout<<distance[distance.size()-1]<<endl;
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