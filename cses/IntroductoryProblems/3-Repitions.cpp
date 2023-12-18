#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin >> s;
    s+='X';
    int n=s.length(), l=1, m=0;
    for (int i=1; i<n; i++){
        if (s[i-1]!=s[i]){
            m = max(l, m);
            l=1;
        }
        else{
            l++;
        }
    }
    cout << m;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}