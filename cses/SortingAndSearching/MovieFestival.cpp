#include <bits/stdc++.h>

using namespace std;

const bool testcases=false;
void solve(){
    int n;
    cin >> n;

    vector<pair<int, int>> m(n);
    for (pair<int, int> &i:m){
        cin >> i.second >> i.first; 
    }

    sort(m.begin(), m.end());

    int cur_end = m[0].first;
    int cnt=1;
    for (int i=1; i<n;){
        while (i<n && m[i].second<cur_end)
            i++;
        if (i<n){
            cur_end=m[i].first;
            i++;
            cnt++;
        }
    }
    cout << cnt << '\n';
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