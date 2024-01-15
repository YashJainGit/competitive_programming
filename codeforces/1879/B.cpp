#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int &i:a){
        cin >> i;
    }
    for (int &i:b){
        cin >> i;
    }

    int ma = *min_element(a.begin(), a.end());
    long long sb=0;
    for (int i:b){
        sb+=i+ma;
    }

    int mb = *min_element(b.begin(), b.end());
    long long sa=0;
    for (int i:a){
        sa+=i+mb;
    }

    cout << min(sa, sb) << '\n';
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