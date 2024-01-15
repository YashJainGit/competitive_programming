#include <bits/stdc++.h>

using namespace std;

const bool testcases=false;
void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    for (int &i:a){
        cin >> i;
    }

    int m_ind = max_element(a.begin(), a.end())-a.begin();

    long long m = 0;
    for (int i=0; i<n; i++){
        long long x = abs(m_ind-i)+a[i];
        if (i>m_ind){
            x+=m_ind;
        }
        else if (i<m_ind){
            x+=n-m_ind-1;
        }
        m = max(m, x);

    }
    cout << m << '\n';
    return;



    
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