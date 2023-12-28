#include <bits/stdc++.h>

using namespace std;

const bool testcases=false;
void solve(){
    int n;
    cin >> n;

    string s;
    cin>>s;

    int mo=0, ml=0;
    int fo=0, fl=0;
    for (int i=0; i<n;i++){
        if (s[i]=='L')
            fl++;
        else
            fo++; 
    }

    for (int i=0; i<n; i++){
        if (s[i]=='L'){
            fl--;
            ml++;
        }
        else{
            mo++;
            fo--;
        }

        if (fl!=ml && mo!=fo && fl+fo>0 && ml+mo>0){
            cout << i+1 << '\n';
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