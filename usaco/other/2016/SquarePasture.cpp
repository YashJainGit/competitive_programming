
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=true;

void solve(){  
    int x11, y11, x12, y12;
    int x21, y21, x22, y22;

    cin >> x11 >> y11 >> x12 >> y12;
    cin >> x21 >> y21 >> x22 >> y22;

    long long w = max(x12, x22) - min(x11, x21);
    long long l = max(y12, y22) - min(y11, y21);

    cout << pow(max(w, l), 2) << '\n';
}

int main(){
    
    if (filein){
         string f="square";
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
