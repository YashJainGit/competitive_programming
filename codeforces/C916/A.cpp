#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    
    int n;
    cin >> n;

    string s;
    cin >> s;

    int a[26]={};

    for (int i=0; i<n; i++){
        a[s[i]-'A']++;
    }


    int c=0;
    for (int i=0; i<26; i++){
        if (a[i]>=i+1){
            c++;
        } 
    }
    cout << c << '\n';

    
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