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
 
const int MAX_N=1e6+5, M=1e9+7;
 
ll n,m, t, x,y;
double prod;
vector<double> a;
 
bool check(ll x){
    double s=n;
    s*=log10(x);
    return s>prod;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    a.resize(n);
    for(int i=0;i<n;++i) cin >> a[i];
    for(int i=0;i<n;++i) prod+=log10(a[i]);
    ll l=1, r=1e10;
    ll ans=0;
    while(l<=r){
        ll mid=(r+l)/2;
        if(check(mid)){ans=mid; r=mid-1;}
        else l=mid+1;
    }
    cout << ans; 
}