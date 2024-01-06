#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    vector<vector<int>> mat(n, vector<int>(n));

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            char x;
            cin >> x;
            mat[i][j] = x-'a';
        }
    }

    int ans=0;
    for (int i=0; i<n/2; i++){
        for (int j=0; j<n/2; j++){
            int mx = max(max(mat[i][j], mat[n-j-1][i]), max(mat[j][n-i-1], mat[n-i-1][n-j-1]));
            ans += mx-mat[i][j];
            ans += mx-mat[n-j-1][i];
            ans += mx-mat[j][n-i-1];
            ans += mx-mat[n-i-1][n-j-1];
        }
    }
    cout << ans << '\n';

    
    
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}