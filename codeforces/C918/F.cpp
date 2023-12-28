#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    vector<pair<int, int>> r;
    vector<pair<int, int>> l;

    for (int i=0; i<n; i++){
        int s, e;
        cin >> s >> e;

        if (s<e){
            r.emplace_back(s, e);
        }
        else{
            l.emplace_back(s, e);
        }
    }

    sort(r.begin(), r.end());
    sort(l.begin(), l.end());

    vector<int> s;
    int res=0;
    for (pair<int, int> &i:r){
        cout << i.first << ' ' << i.second << '\n';
        while (s.size()>0 && s.back() <i.first){
            s.pop_back();
        }
        res+=s.size();
        s.push_back(i.second);
    }
    cout << res << '\n';
    
    
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