#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    vector<int> b(n);

    for (int &i:a){
        cin >> i;
    }
    for (int &i:b){
        cin >> i;
    }
    vector<int> aa(n);
    vector<int> bb(n);
    for (int i=0; i<n; i++){
        aa[i] = a[i];
        bb[i] = b[i];
    }

    sort(aa.begin(), aa.end(), [&](int i, int j){return a[i]>a[j];});
    sort(bb.begin(), bb.end(), [&](int i, int j){return b[i]>b[j];});

    int hi=0; int lo=0;
    for (int i=0; i<n; i++){
        if (a[aa[i]]>b[bb[i]]) hi++;
        if (a[aa[i]]>b[bb[n-i-1]]) lo++;
    }

    if (hi>=x && x>=lo){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
        return;
    }
    vector<int> f(n);
    for (int i=0; i<n; i++) {
        f[aa[0]] = b[bb[((i-x)+n)%n]];
    }

    for (int i:f){
        cout << i << ' ';
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