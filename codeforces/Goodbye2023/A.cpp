#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> b(n);
    int cur=2023;
    for (int &i:b){
        cin >> i;
    }

    for (int &i:b){
        if (cur%i!=0){
            cout << "No\n";
            return;
        }
        else{
            cur/=i;
        }
    }
    cout << "Yes\n";
    cout << cur << ' ';
    for (int i=1; i<k; i++){
        cout << 1 << ' ';
    }
    cout << '\n';
    
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