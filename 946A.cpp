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
#include <iomanip>

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
    double A,B,C;
    cin>>A>>B>>C;
    double D=B*B-4*A*C;
    if(D<0){
        cout<<-1;
    }
    else if(D==0){
        cout<<1<<endl;
        cout<<fixed<<setprecision(10)<<(-B)/(2*A);
    }
    else{
        cout<<2<<endl;
        double d=sqrt(D);
        double r1=(-B-d)/(2*A);
        double r2=(-B+d)/(2*A);
        if(r1>r2){
            swap(r1,r2);
        }
        cout<<fixed<<setprecision(10)<<r1<<endl;
        cout<<fixed<<setprecision(10)<<r2;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
}