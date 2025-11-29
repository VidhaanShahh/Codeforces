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
    string s1="";
    for(char c:s){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            continue;
        }
        else{
            s1=s1+c;
        }
    }
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    bool flag=false;
    string s2="";
    int i=0;
    while(i<s1.length()){
        if(flag==false){
            s2=s2+'.';
            flag=true;
        }
        else{
            s2=s2+s1[i];
            flag=false;
            i++;
        }
    }
    cout<<s2<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}