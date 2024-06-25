#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const int mod=1e9+7;

void solve(){
    int n;
    cin >> n;

    vector<vector<bool>> a(n, vector<bool>(n));
    vector<vector<ll>> m(n, vector<ll>(n));

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            char c;
            cin >> c;

            a[i][j] = c=='.';
        }
    }

    for (int i=n-1; i>=0; i--){
        if (not a[i][n-1])
            break;
        m[i][n-1] = 1;
    }
    for (int i=n-1; i>=0; i--){
        if (not a[n-1][i])
            break;
        m[n-1][i] = 1;
    }

    for (int i=n-2; i>=0; i--){
        for (int j=n-2; j>=0; j--){
            if (!a[i][j]){
                m[i][j] = 0;
            }
            else{
                m[i][j] = (m[i][j+1]+m[i+1][j])%mod;
            }
        }
    }
    cout << m[0][0] << '\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}