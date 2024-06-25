
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=true;

void solve(){
    long long x11, x12, y11, y12; 
    long long x21, x22, y21, y22; 
    long long x31, x32, y31, y32;
    
    cin >> x11 >> y11 >> x12 >> y12; 
    cin >> x21 >> y21 >> x22 >> y22; 
    cin >> x31 >> y31 >> x32 >> y32; 

    long long a1 = (x12-x11)*(y12-y11) - max(0ll, min(y32, y12)-max(y31, y11))*max(0ll, min(x32, x12)-max(x31, x11));
    long long a2 = (x22-x21)*(y22-y21) - max(0ll, min(y32, y22)-max(y31, y21))*max(0ll, min(x32, x22)-max(x31, x21));
    cout << a1 + a2 << '\n';
}

int main(){
    
    if (filein){
         string f="billboard";
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
