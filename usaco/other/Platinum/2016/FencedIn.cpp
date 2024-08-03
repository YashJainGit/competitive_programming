
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=false;

void solve(){
    int A, B, n, m;
    cin >> A >> B >> n >> m;

    priority_queue<pair<int,int>, greater<pair<int, int>>()> pq;

    vector<int> a(n);
    for (int &i:a)
        cin >> i;
    vector<int> b(m);
    for (int &i:b)
        cin >> i;

    vector<vector<bool>> v(n, vector<bool>(m)) ;
    int i=0; j =0;
    int s=0;
    while (s <= (n+1)*(m+1)-1){ 

    }

}

int main(){
    
    if (filein){
         string f="fencedin";
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
