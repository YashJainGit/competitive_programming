#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    vector<int> cnt(101);
    vector<int> a(n);

    int np=0;
    for (int &i:a){
        cin >> i;
        cnt[i]++;
        if (cnt[i]==2){
            np++;
        }
    }

    if (np<2){
        cout << -1 << '\n';
        return;
    }

    vector<int> num(101);
    int npp=2;
    for (int i=0; i<101; i++){
        if (cnt[i]>=2 && npp>0){
            num[i]=npp;
            npp--;
        }
        else{
            num[i]=3;
        }
    }

    for (int i=0; i<n; i++){
        cout << num[a[i]] << ' ';
        if (num[a[i]]==1 || num[a[i]]==2){
            num[a[i]]=3;
        }
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