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
 
int n,m;
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector<int> a(n);
 
    multiset<ar<int, 2>> s;
    multiset<ar<int,2>, greater<ar<int, 2>>> s2;
    for(int i=0;i<n;++i) cin >> a[i];
    for(int i=n-1;i>=0;--i){
        if(s.lower_bound({a[i]})==s.end()) s.insert({a[i], i});
    }
    int ans=0;
    for(int i=0;i<n-1;++i){
        auto it=s.lower_bound({a[i]});
        ans=max(ans,(*it)[1]-i);
        if((*it)[0]==a[i]&&i==(*it)[1]) s.erase(it);
    }
    cout << ans;
 
}
