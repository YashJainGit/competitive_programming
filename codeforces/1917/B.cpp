#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int c[26]={};

    for (int i=0; i<n;i++){
        c[s[i]-'a']++;
    }
    
    for (int i=0; i<n; i++){
        
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}