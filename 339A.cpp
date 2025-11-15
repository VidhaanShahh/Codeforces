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
    string s;
    cin>>s;
    int n=s.length();
    if(n==1){
        cout<<s<<endl;
    }
    int c1=0;
    int c2=0;
    int c3=0;
    for(int i=0;i<n;i++){
        if(s[i]-'0'==1){
            c1++;
        }
        else if(s[i]-'0'==2){
            c2++;
        }
        else if(s[i]-'0'==3){
            c3++;
        }
    }
    string s1="";
    for(int i=0;i<c1;i++){
        s1=s1+"1+";
    }
    for(int i=0;i<c2;i++){
        s1=s1+"2+";
    }
    for(int i=0;i<c3;i++){
        s1=s1+"3+";
    }
    s1.pop_back();
    cout<<s1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}