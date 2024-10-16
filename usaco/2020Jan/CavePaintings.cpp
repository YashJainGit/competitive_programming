#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const bool testcases=false;
const bool filein=false;
const string f="cave";
const int md = 1e9+7;
const int nx = 1e3+1;

int n, m;
vector<vector<bool>> g(nx, vector<bool>(nx, false));
vector<vector<int>> d(nx, vector<int>(nx, -1));
int k=0;
vector<int> rc;
vector<int> rd;
vector<int> f1;

void ff(int i, int j){
    if (i==0 || j==0 || i==n-1 || j==m-1 || (!g[i][j]) || d[i][j]!=-1){
        return;
    }
    d[i][j] = k;
    if (rc[k] == i && d[i][j-1]==-1){
        f1[k] = (f1[k]*2)%md;
    }
    rd[k] = min(i, rd[k]);

    ff(i+1, j);
    ff(i-1, j);
    ff(i, j+1);
    ff(i, j-1);
}
void solve(){
    int n, m;
    cin >> n >> m;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            char x;
            cin >> x;
            g[i][j] = x=='.';
        }
    }

    for (int i=n-2; i>=0; i--){
        for (int j=1; j<m-1; j++){
            if (g[i][j] && d[i][j]==-1){
                rc.push_back(i);
                rd.push_back(n+1);
                f1.push_back(1);
                ff(i, j);
                k++;
            }
        }
    }

    ll ans = 1;
    for (int i=0; i<k; i++){
        cout << f1[i] << ' ';
        ans = (ans*(f1[i]+(rc[i]-rd[i])))%md;
    }
    cout << '\n';
    for (int i=0; i<k; i++){
        cout << rd[i] << ' ';
    }
    cout << '\n';
    for (int i=0; i<k; i++){
        cout << rc[i] << ' ';
    }

    cout << ans << '\n';
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