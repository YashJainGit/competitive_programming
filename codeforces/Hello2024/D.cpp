#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    vector<bool> d(n);
    vector<int> a(n);
    for (int &i:a){
        cin >> i;
    }

    priority_queue<pair<int, int>> pq;
    
    
    
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