#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=true;
const int nx = 1e5+10;

struct pie{
    int i;
    int tb, te;
    vector<int> a;

};

vector<vector<pie>> p(2, vector<pie>(nx));
vector<vector<int>> dp(nx, vector<int>(2, -1));


void solve(){
    int n, d;
    cin >> n >> d;
   
    for (int i=0; i<n; i++){
        p[0][i].i = i;
        cin >> p[0][i].tb >> p[0][i].te;
    }
    for (int i=0; i<n; i++){
        p[1][i].i = i;
        cin >> p[1][i].tb >> p[1][i].te;
    }
   
    sort(p[0].begin(), p[0].end(), [&](pie a, pie b){
        return a.te<b.te;  
    });
    sort(p[1].begin(), p[1].end(), [&](pie a, pie b){
        return a.te<b.te;  
    });

    for (int i=0; i<n; i++){
        cout << dfs(i, 0) << '\n';
    }
}


int main(){
    if (filein){
        string f="piepie";
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
    while (t--) solve();

    return 0;

}