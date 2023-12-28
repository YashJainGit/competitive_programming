#include <bits/stdc++.h>

using namespace std;

const bool testcases=false;
void solve(){
    long long x, k;
    cin >> x >>k; 

    vector<pair<long long, long long>> q;
    for (int i=0; i<k; i++){
        int l;
        cin >> l;

        vector<long long> a(l);
        for (long long &i:a){
            cin >> i;
        }
        int j=0;
        long long mn=0;
        while (j<l){
            long long s=0;
            while (j<l && s<=0){
                s+=a[j];
                j++;
                mn=min(s, mn);
            }
            if (s>0){
                q.emplace_back(mn, s);
            }
            //cout << i << ">> " << mn << ',' << s << '\n';
        }
    }

    sort(q.begin(), q.end(), greater<pair<long long, long long>>());
    for (auto i:q){
        if (x+i.first<0){
            cout << x << '\n';
            return;
        }
        if (i.second>0)
            x+=i.second;
    }
    cout << x << '\n';
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