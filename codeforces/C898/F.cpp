#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &i:a){
        cin >> i;
    }

    vector<int> h(n);
    for (int &i:h){
        cin >> i;
    }

    int cur=a[0];
    int m=0;
    for (int i=0, j=0; j<n;){
        while (j!=n-1 && cur+a[j+1]<=k && h[j]/h[j+1]){
            j++;
            cur+=a[j];
        }
        m = max(m, j-i+1);
        //cout << i << ' ' << j << '\n';
        cur-=a[i];
        i++;
        while (i<n && a[i]>k){
            i++;
        }
        if (i>=j){
            i=j;
        }
    }
    
    cout << m << '\n';
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