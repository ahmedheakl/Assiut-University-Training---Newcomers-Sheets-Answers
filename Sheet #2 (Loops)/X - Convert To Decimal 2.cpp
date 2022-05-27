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
ll n, m;
 
ll pw(int a, int b){
    if(b==0) return 1;
    ll t=pw(a, b/2);
    if(b&1) return t*t*a;
    return t*t;
}
 
 
int main(){
    int t; cin >> t;
    while(t--){
        int a=0;
        cin >> n;
        for(int i=0;i<32;++i){
            if(n&(1<<i)) ++a;
        }
        ll ans=0;
        for(int i=0;i<a;++i) ans+=pw(2,i);
        cout << ans << endl;
    }
 
}