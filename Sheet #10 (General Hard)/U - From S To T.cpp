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
#define se second
 
 
const int MAX_N=4e3+5, M=1e9+7;
 
ll n,m;
vector<vector<char>> graph;
 
bool solve(string s, string p, string t){
    map<char, int> mp;
    for(auto e: p) ++mp[e];
    for(int i=0;i<sz(t);++i){
        if(s[i]==t[i]) continue;
        else if(mp[t[i]]==0) return false;
        else s.insert(s.begin()+i, t[i]), --mp[t[i]];
    }
    return s==t;
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        string s,t,p;
        cin >> s >> t >> p;
        if(solve(s,p,t)) cout << "YES\n";
        else cout << "NO\n";
    }
 
}