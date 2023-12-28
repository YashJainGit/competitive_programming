#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    long long s=0;
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        s+=x;
    }

    if (sqrt(s)==(int)sqrt(s)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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