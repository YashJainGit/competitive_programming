#include <bits/stdc++.h>

using namespace std;

int n;
const bool testcases=true;

void max3 (vector<int> &a, vector<int> &ma){

    for (int i=0; i<n; i++){
        if (a[i]>=a[ma[0]]){
            ma[2]=ma[1];
            ma[1]=ma[0];
            ma[0]=i;
        }
        else if (a[i]>=a[ma[1]]){
            ma[2]=ma[1];
            ma[1]=i;
        }
        else if (a[i]>=a[ma[2]]){
            ma[2]=i;
        }
    }
}


void solve(){
    cin >> n;

    vector<int> a(n+1), b(n+1), c(n+1);
    a[n] = 0; 
    b[n] = 0; 
    c[n] = 0; 
    vector<int> ma={n, n, n};
    vector<int> mb={n, n, n};
    vector<int> mc={n, n, n};
    
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
        cin >> b[i];
    for (int i=0; i<n; i++)
        cin >> c[i];

    max3(a, ma);
    max3(b, mb);
    max3(c, mc);
    /*
    for (int i=0; i<3; i++)
        cout << ma[i] << ' ';
    cout << '\n';
    for (int i=0; i<3; i++)
        cout << mb[i] << ' ';
    cout <<'\n';
    for (int i=0; i<3; i++)
        cout << mc[i] << ' ';
        */
    int best = 0;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            for (int k=0; k<3; k++){
                //cout << a[ma[i]] << ' ' <<  b[mb[j]] << ' ' << c[mc[k]] << '\n';
                if (ma[i]!=mb[j] && mb[j]!=mc[k] && mc[k]!=ma[i]){
                    best = max(best, a[ma[i]]+b[mb[j]]+c[mc[k]]);
                }
            }
        }
    }
    cout << best << '\n';

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