#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin>>n;

    string s;
    cin >> s;

    int c0 = 0;
    for (char i:s){
        if (i=='0'){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
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