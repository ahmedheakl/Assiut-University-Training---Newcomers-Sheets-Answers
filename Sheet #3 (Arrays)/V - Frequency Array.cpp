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
    vector<int> a(n);
    map<int, int> mp;
    for(int i=0;i<n;++i) cin >> a[i], ++mp[a[i]];
    for(int i=1;i<=m;++i) cout << mp[i] << endl;
}