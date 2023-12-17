#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;

vector<int> dp;
vector<int> c;
vector<vector<int>> m;

int create(int i){
    if (c[i]==0 || m[i].size()==0){
        return c[i];
    }
    if (dp[i]!=-1){
        return dp[i];
    }

    int s=0;
    for (int j=0; j<m[i].size(); j++){
        s+=create(m[i][j]);
    }

    dp[i] = min(s, c[i]);
    return dp[i];
}

void solve(){
    int n, k;
    cin >> n >> k;

    c = vector<int>(n, 0);
    dp = vector<int>(n, -1);
    m = vector<vector<int>>(n, vector<int>());
    for (int &i:c){
        cin >> i;
    } 
    for (int i=0; i<k; i++){
        int x;
        cin >> x;

        c[x-1] = 0;
    }

    for (vector<int> &v: m){
        int l;
        cin >> l;
        for (int i=0; i<l; i++){
            int k;
            cin >> k;
            v.push_back(k-1);
        }
    }

    /*
    for (int i=0; i<n; i++){
        cout << c[i] << ':';
        for (int j=0; j<m[i].size(); j++){
            cout << m[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    */
    for (int i=0; i<n; i++){
        cout << create(i) << ' ';
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    ll t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}