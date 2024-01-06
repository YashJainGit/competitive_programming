#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n, k;
    cin >> n >> k;

    vector<bool> a(n);
    for (int i=0; i<n; i++){
        char x;
        cin >> x;
        a[i] = x=='B';
    }

    int cnt=0;
    for (int i=0; i<n; i++){
        if (a[i]){
            i+=k-1;
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