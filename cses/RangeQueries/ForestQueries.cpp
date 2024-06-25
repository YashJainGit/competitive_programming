#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;

    vector<vector<int>> a(n+1, vector<int>(n+1));

    for (int i=1; i<=n; i++){
        int sum = 0;
        for (int j=1; j<=n; j++){
            char c;
            cin >> c;

            sum += c=='*';
            a[i][j] = sum;
            a[i][j] += a[i-1][j];
        }
    } 
    
    for (int i=0; i<q; i++){
        int x1, y1, x2, y2;
        cin >> y1 >> x1 >> y2 >> x2;
        cout << a[y2][x2] - a[y2][x1-1] - a[y1-1][x2] + a[y1-1][x1-1] << '\n';
    }

    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}