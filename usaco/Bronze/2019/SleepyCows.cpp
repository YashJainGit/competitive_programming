
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=false;

void solve(){
    vector<int> cows(3);

    cin>>cows[0] >>cows[1]>>cows[2];
    sort(cows.begin(), cows.end());
    int a=cows[0];
    int b=cows[1];
    int c=cows[2];

    cout << b-a-1 << '\n';
    cout << c-b-1 << '\n';
}

int main(){
    
    if (filein){
        string f="herding";
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
