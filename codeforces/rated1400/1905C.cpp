#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    char m=0;
    for (int i=0; i<n; i++){
        if (s[i]>s[m]){
            m = i;
        }
    }

    string t = s;
    reverse(t.begin()+m, t.end());

    for (int i=1; i<n; i++){
        if (t[i-1]>t[i]){
            cout << -1;
            return;
        }
    }

    
    int ops = n-m;
    for (int i=m; i<n; i++){
        if (s[i]==s[i-1]){
            ops--;
        }
    }
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