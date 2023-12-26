#include <bits/stdc++.h>

using namespace std;

const bool testcases=false;
void solve(){
    int m;
    cin >> m;  

    vector<int> a(30);

    for (int i=0; i<m; i++){
        int q;
        cin >> q;

        if (q==1){
            int x;
            cin >> x;
            a[x]++;
        }
        else{
            int w;
            cin >> w;

            for (int i=29; i>=0; i--){
                int c=0;
                while (w>=(1<<i) && a[i]-c>0){
                    w-=1<<i;
                    c++;
                }

                if (w==0){
                    break;
                }
            }
            if (w==0){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
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