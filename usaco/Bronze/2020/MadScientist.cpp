#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=false;

void solve(){
    int n;
    cin >> n;

    vector<bool> a(n);
    for (int i=0; i<n; i++){
        char c;
        cin >> c;
        a[i] = c=='H';
    }
    vector<bool> b(n);
    for (int i=0; i<n; i++){
        char c;
        cin >> c;
        b[i] = c=='H';
    }

    int cnt=a[0]!=b[0];
    for (int i=1; i<n; i++){
        cnt += (a[i-1]==b[i-1])^(a[i]==b[i]); 
    }
    cout << cnt << '\n';
}

int main(){
    
    if (filein){
        string f="breedflip";
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(0);
    }

    int t=1; 
    if (testcases) cin>>t;
    while(t--) solve();

    return 0;
}
