#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    vector<vector<long long>> a(n, vector<long long>(n));
    vector<long long> ans(n);

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for (int i=0; i<n; i++){
        long long k=(1ll<<30)-1;
        for (int j=0; j<n; j++){
            if (i==j){
                continue;
            }
            k&=a[i][j];
        }
        ans[i] = k;
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i!=j && (ans[i]|ans[j])!=a[i][j]){
                cout << "No\n";
                return;
            }   
        }
    }

    cout << "Yes\n";
    for (long long &i:ans){
        cout << i << ' ';
    }
    cout << '\n';
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