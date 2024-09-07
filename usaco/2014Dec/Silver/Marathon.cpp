#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=true;
string f="marathon";
const int maxn = 3e5+4;

struct coor{
    int x, y;
};

int n, k;
vector<coor> a;
vector<vector<int>> memo;

int dp(int i, int j){
    if (i==n-1){
        return 0;
    }
    if (memo[i][j]!=-1){
        return memo[i][j];
    }

    int mn=INT_MAX;
    for (int p=0; p<=j && p+i+1<n; p++){
        coor nx = a[i+p+1];
        mn = min(mn, abs(nx.x-a[i].x)+abs(nx.y-a[i].y)+dp(i+p+1, j-p));
    }
    memo[i][j] = mn;
    
    return mn;
    
    

}

void solve(){
    cin >> n >> k;
    a.resize(n);
    memo.resize(n, vector<int>(k+1, -1));

    for (int i=0; i<n; i++){
        cin >> a[i].x >> a[i].y; 
    }

    cout << dp(0, k) << '\n';
}


int main(){
    if (filein){
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(0);
    }

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;

}