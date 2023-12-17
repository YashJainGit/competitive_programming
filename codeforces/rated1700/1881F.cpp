#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++);

const bool testcases = true;
int n;
vector<vector<int>> g;

void dfs(int v, int p, vector<int> &d){
	if(p != -1) d[v] = d[p] + 1;
	for(int u: g[v]){
		if(u != p){
			dfs(u, v, d);
		}
	}
}

int main(){
    int t;
	cin>>t;
	while(t--){
	    int k;
		cin>>n>>k;
		g.assign(n, vector<int>(0));
		vector<int> marked(k);
		for(int &e: marked) cin >> e, --e;
		for(int i=1;i<n;i++){
			int u, v;
			cin >> u >> v;
			--u, --v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		if(k==1){
			cout<<0<<"\n";
			continue;
		}
		vector<int> d1(n);
		dfs(marked[0], -1, d1);
		int mx = marked[0];
		for(int e: marked){
		    if(d1[e] > d1[mx]) mx = e;
		}
		vector<int> d2(n);
		dfs(mx, -1, d2);
		mx = marked[0];
		for(int e: marked){
		    if(d2[e] > d2[mx]) mx = e;
		}
		cout << (d2[mx] + 1) / 2 << "\n";
	}
	return 0;
}