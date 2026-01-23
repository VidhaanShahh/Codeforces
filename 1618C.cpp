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

ll gcd(ll a,ll b){
    while(b!=0){
        a=a%b;
        swap(a,b);
    }
    return a;
}
void solve() {
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll ogcd=0;
    ll egcd=0;
    for(ll i=0;i<n;i++){
        cin>>v.at(i);
        if(i&1){
            ogcd=gcd(ogcd,v.at(i));
        }
        else{
            egcd=gcd(egcd,v.at(i));
        }
    }
    bool flag=true;
    for(ll i=1;i<n;i=i+2){
        if(v.at(i)%egcd==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<egcd<<endl;
        return;
    }
    flag=true;
    for(ll i=0;i<n;i=i+2){
        if(v.at(i)%ogcd==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<ogcd<<endl;
        return;
    }
    cout<<0<<endl;
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