#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    vector<int> b(m);
    int as=0;
    for (int &i:a){
        cin >> i;
        as+=i;
    }
    for (int &i:b)
        cin >> i;
    
    cout << "-" << '\n';
    if (k%2){
        as-=*min_element(a.begin(), a.end());
        as+=*max_element(b.begin(), b.end());
        cout << as << '\n';
    }
    else{
        cout << "yes" << '\n';
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