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
int a[MAX_N]={};
ll n;
int main(){
    cin >> n;
    int t=n;
    vector<int> div;
    for(int i=2;i*i<=n;++i){
        while(t%i==0) t/=i, div.pb(i);
    }
    if(t>1) div.pb(t);
    set<int> ans;
    for(ll i=0;i<(1ll<<sz(div));++i){
        ll cur=1;
        for(int pos=0;pos<sz(div);++pos){
            if(i&(1ll<<pos)) cur*=div[pos];
        }
        ans.insert(cur);
    }
    for(auto e: ans) cout << e << endl;
 
 
}
 