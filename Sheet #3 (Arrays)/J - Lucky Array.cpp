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
const int MAX_N=1e3+2;
ll n;
 
 
int main(){
    cin >> n;
    map<int, int> mp;
    vector<int> a(n);
    int mn=INT_MAX;
    for(int i=0;i<n;++i) cin >> a[i], mn=min(mn, a[i]), ++mp[a[i]];
    if(mp[mn]&1) cout << "Lucky";
    else cout <<"Unlucky";
 
 
 
 
 
 
}
 