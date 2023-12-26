#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    string s;
    cin >> s;
    int n = s.length();

    for (int i=1; i<=n/2; i++){
        string a = s.substr(0,i);
        string b = s.substr(i,n);
        //cout << a << ' ' << b << '\n';
        if (stoi(b)>stoi(a) && b.length()==to_string(stoi(b)).length()){
            cout << a << ' ' << b << '\n';
            return;
        } 
    }
    cout << -1 << '\n';    
    
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