
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=true;

void solve(){

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int &i:a){
        cin >> i;
    }
    sort(a.begin(), a.end());

    int lo=0, hi=n;
    int best = INT_MAX;
    while (lo<hi){
        
        int mid = lo+(hi-lo)/2;
        //cout << lo << ' ' << hi << ": " << mid << '\n';

        int s=a[0], cnt=1;
        for (int i=1; i<n; i++){
            if (a[i]-s>mid*2){
                cnt++;
                s=a[i];
            }
        }
//        cout << cnt << '\n';

        if (cnt>k){
            lo=mid+1;
        }
        else{
            hi=mid;
            best = mid;
        }
    }
    cout << best << '\n';
}

int main(){
    
    if (filein){
         string f="angry";
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(0);
    }

    int t=1; 
    if (testcases) cin>>t;
    while(t--) solve();

    return 0;
}
