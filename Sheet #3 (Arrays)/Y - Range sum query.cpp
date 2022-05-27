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
ll n, q;
 
 
 
int main(){
    cin >> n >> q;
    vector<ll> a(n), pref(n+1, 0);
    for(int i=1;i<=n;++i) cin>>a[i-1], pref[i]=pref[i-1]+a[i-1];
    while(q--){
        int x,y; cin >> x >> y;
        if(x==1) cout << pref[y] << endl;
        else cout << pref[y]-pref[x-1] << endl;
 
    }
}
 