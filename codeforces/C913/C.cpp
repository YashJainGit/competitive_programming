#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    string s;
    int n;
    cin >> n;
    cin >> s;
    
    vector<int> cnt(26);

    int mx=0;
    for (char &i:s){
        cnt[i-'a']++;
        mx = max(mx,cnt[i-'a']);
    }

    cout << max(0, (mx-(n%2))-(n-mx)) + (n%2) << '\n';
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