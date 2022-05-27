#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
#define all(v)	 ((v).begin()), ((v).end())
#define rall(v) (((v).rbegin()), ((v).rend())
#define d(x) double(x)
#define pb(x) push_back(x)
#define sz(x) x.size()
#define fi first
const int MAX_N=51;
ll n, m;
 
 
 
int main(){
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j) cin >> a[i][j];
    }
    int b; cin >> b;
    for(auto e: a){
        for(auto u: e) if(b==u){
            cout << "will not take number";
             return 0;
        }
    }
    cout << "will take number";
 
 
 
 
 
 
 
}