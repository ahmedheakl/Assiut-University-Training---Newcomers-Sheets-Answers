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
    vector<int> a(n);
    int mn=INT_MAX, mx=-INT_MAX;
    for(int i=0;i<n;++i) cin >> a[i], mn=min(mn, a[i]), mx=max(mx, a[i]);
    auto i_mn=find(all(a), mn), i_mx=find(all(a), mx);
    swap(a[distance(a.begin(), i_mn)], a[distance(a.begin(), i_mx)]);
    for(auto e: a) cout << e << " ";
 
 
 
 
 
 
}
 