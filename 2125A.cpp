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
    string s;
    cin>>s;
    string s1="FFT";
    string s2="NTT";
    if(s.find(s1)!=string::npos || s.find(s2)!=string::npos){
        int cN=0;
        int cT=0;
        int cF=0;
        string s3="";
        for(char c:s){
            if(c=='N'){
                cN++;
            }
            else if(c=='T'){
                cT++;
            }
            else if(c=='F'){
                cF++;
            }
            else{
                s3=s3+c;
            }
        }
        string ans="";
        for(int i=0;i<cT;i++){
            ans=ans+'T';
        }
        for(int i=0;i<cF;i++){
            ans=ans+'F';
        }
        for(int i=0;i<cN;i++){
            ans=ans+'N';
        }
        ans=ans+s3;
        cout<<ans;
    }
    else{
        cout<<s;
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