#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> t;
vector<bool> m;

pair<int, int> farthest(int i){

    m[i] = true;
    pair<int, int> mx= {i, 0};
    for (int j=0; j<t[i].size(); j++){
        if (!m[t[i][j]]){

            pair<int, int> cur = farthest(t[i][j]);
            cur.second++;
            if (mx.second<cur.second){
                mx = cur;
            }
        }
    }
    return mx;

}
void solve(){
    int n;
    cin >> n;

    if (n==1){
        cout << 0 << '\n';
        return;
    }

    t.resize(n, vector<int>(0));
    m.resize(n, false);
    for (int i=0; i<n-1; i++){
        int a, b;
        cin >> a >> b;

        t[a-1].push_back(b-1);
        t[b-1].push_back(a-1);
    }

    int fst = farthest(1).first;
    fill(m.begin(), m.end(), false);
    cout << farthest(fst).second << '\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}