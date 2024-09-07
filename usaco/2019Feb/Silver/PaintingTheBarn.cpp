#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=true;
string filen="paintbarn";
const int maxn = 5001;


void solve(){
    int n, k;
    cin >> n >> k;

    vector<vector<int>> a(1002, vector<int>(1002, 0));
    for (int i=0; i<n; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >>  x2>> y2;

        for (int j=x1; j<x2; j++){
            a[j][y1]++;
            a[j][y2]--;
        }
    }

    int cur=0;
    int ans=0;
    for (int i=0; i<1002; i++){
        for (int j=0; j<1002; j++){
            cur+=a[i][j];
            if (cur==k){
                ans++;
            }
        }
    } 
    cout << ans << '\n';
}   


int main(){
    if (filein){
        freopen((filen+".in").c_str(), "r", stdin);
        freopen((filen+".out").c_str(), "w", stdout);
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