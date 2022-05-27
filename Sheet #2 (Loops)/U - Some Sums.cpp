
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
ll n, m, a,b;
int sum(int x){
    string s=to_string(x);
    int ss=0;
    for(auto e: s) ss+=int(e-'0');
    return ss;
}
 
 
int main(){
    cin >> n >> a >> b;
    ll ans=0;
    for(int i=0;i<=n;++i)if(sum(i)>=a&&sum(i)<=b) ans+=i;
    cout << ans;
 
}
 